#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

int boardSize = 5;
Vector2 direction = new Vector2(1, 2);
int knight = 0;
int step = 0;

const string EMPTY_TILE =	"[ ]";
const string KNIGHT_TILE =	"[X]";
const string VISITED_TILE = "[O]";
const string LN = "\n";

list<int> order;
std::list<int>::iterator it;

string grid(int boardSize) 
{
	string board = "";
	for (size_t i = 0; i < boardSize * boardSize; i++)
	{
		if (i % boardSize == 0) board += LN;
		board += (i == knight) ? KNIGHT_TILE : EMPTY_TILE;
	}
	return board + LN;
}

int main()
{
	cout << "Size board: ";
	cin >> boardSize;

	while (step < boardSize * boardSize) 
	{
		cout << grid(boardSize);
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

