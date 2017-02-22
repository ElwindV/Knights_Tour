#include <string>
using namespace std;

class Board 
{
public:
	Board(int);
	void Draw(void);

private:
	string Grid(void);

	int boardSize = 5;
	int knight = 0;

	const string EMPTY_TILE = "[ ]";
	const string KNIGHT_TILE = "[X]";
	const string VISITED_TILE = "[O]";
	const string LN = "\n";
};