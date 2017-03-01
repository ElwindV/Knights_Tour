#include <string>
using namespace std;

class Board 
{
public:
	Board(int);
	void Draw(void);
	void SetKnight(int*);
	void SetField(int*[]);

private:
	string Grid(void);

	int boardSize = 5;
	int *knight;
	int *field;

	const string EMPTY_TILE = "[ ]";
	const string KNIGHT_TILE = "[X]";
	const string VISITED_TILE = "[O]";
	const string LN = "\n";
};