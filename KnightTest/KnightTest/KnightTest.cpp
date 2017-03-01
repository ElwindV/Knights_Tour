#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include "Board.h"
using namespace std;

Board* board;
int boardSize = 5;
Vector2 direction[] = 
{ 
	new Vector2(1, -2),
	new Vector2(2, -1),
	new Vector2(2, 1),
	new Vector2(1, 2),
	new Vector2(-1, 2),
	new Vector2(-2, 1),
	new Vector2(-2, -1),
	new Vector2(-1, -2)
};
int knight = 0;
int step = 0;
int latestDecision = 0;
int decisionPosition = 0;
int *field;

bool DoesExist(int x, int y, int size)
{
	if (x >= 0 && x < size && y >= 0 && y < size)
	{
		return true;
	} 
	return false;
}

int PossibleCount(int x, int y) 
{
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		if (DoesExist(x + direction[i].x, y + direction[i].y, boardSize)) 
		{
			int position = (x + direction[i].x + (boardSize * (y + direction[i].y)));
			if(field[position] == 0)
			count++;
		}
	}

	return count;
}

void SetToLowest(int *position)
{
	int x = *position % boardSize;
	int y = *position / boardSize;
	int min = 10;
	int pointer = 0;
	int succes = 0;

	for (int i = 0; i < 8; i++)
	{
		int count = PossibleCount(x + direction[i].x, y + direction[i].y);
		if (count != 0 && field[x + direction[i].x + boardSize * (y + direction[i].y)] == 0)
		{
			if (count < min) 
			{
				min = count;
				pointer = i;
				succes++;
			}
			else if (count == min) 
			{
				latestDecision = step;
				decisionPosition = *position;
			}
		}
	}
	if (succes == 0){ 
		//step = latestDecision;
		//*position = decisionPosition;
		return; 
	}
	cout << direction[pointer].x << " : " << direction[pointer].y;;
	x += direction[pointer].x;
	y += direction[pointer].y;
	*position = x + boardSize * y;
}

int main()
{
	cout << "Size board: ";
	cin >> boardSize;
	field = new int[boardSize * boardSize];
	for (int i = 0; i < boardSize * boardSize; i++) 
	{
		field[i] = 0;
	}
	board = new Board(boardSize);

	int x, y;
	cout << "Knight location X: "; cin >> x;
	cout << "Knight location Y: "; cin >> y;
	knight = (x - 1) + (y - 1) * boardSize;

	board->SetField(&field);
	board->SetKnight(&knight);

	while (step < boardSize * boardSize) 
	{
		board->Draw();
		step++;
		field[knight] = step;
		SetToLowest(&knight);
	}

	system("pause");

    return 0;
}
