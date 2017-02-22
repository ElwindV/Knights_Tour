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
	new Vector2(1, 2),
	new Vector2(2, 1),
	new Vector2(2, -1),
	new Vector2(1, -2),
	new Vector2(-1, -2),
	new Vector2(-2, -1),
	new Vector2(-2, 1),
	new Vector2(-1, 2)
};
int knight = 0;
int step = 0;

list<int> order;
std::list<int>::iterator it;

int main()
{
	cout << "Size board: ";
	cin >> boardSize;

	board = new Board(boardSize);

	while (step < boardSize * boardSize) 
	{
		board->Draw();
		//cout << grid(boardSize);
		order.push_back(knight);
		knight++;
		step++;
	}
	//cout << direction.x << " : " << direction.y << "\n";

	for (it = order.begin(); it != order.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	system("pause");

    return 0;
}

