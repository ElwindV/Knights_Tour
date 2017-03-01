#include "stdafx.h"
#include "Board.h"
#include <iostream>

Board::Board(int boardSize)
{
	Board::boardSize = boardSize;
}

string Board::Grid(void)
{
	string board = "";
	for (int i = 0; i < boardSize * boardSize; i++)
	{
		if (i % boardSize == 0) board += LN;
		board += (i == *knight) ? KNIGHT_TILE : (field[i] != 0) ? VISITED_TILE : EMPTY_TILE;
	}
	return board + LN;
}

void Board::Draw(void)
{
	cout << Grid();
}

void Board::SetKnight(int *position) 
{
	knight = position;
}

void Board::SetField(int *param[])
{
	field = *param;
}


