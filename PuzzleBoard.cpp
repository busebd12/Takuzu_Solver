#include "PuzzleBoard.h"
using namespace std;

template <typename T>
PuzzleBoard<T>::PuzzleBoard():size(0) {}

template <typename T>
void PuzzleBoard<T>::fillPuzzleBoard(const string & Filename)
{
	ifstream file;

	file.open(Filename.c_str());

	string line;

	while(file >> line)
	{
		vector<char> temp;

		//use the move function since we are going to overwrite the 
		//contents of the line variable each time we read a new line from the file
		move(line.begin(), line.end(), back_inserter(temp));

		board.emplace_back(temp);

		size+=temp.size();
	}
}

template <typename T>
void PuzzleBoard<T>::print() const
{
	int i;

	int j;

	for(i=0;i<board.size();++i)
	{
		for(j=0;j<board[i].size();++j)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

template <typename T>
int PuzzleBoard<T>::getSize() const
{
	return size;
}

template <typename T>
vector<vector<T>> PuzzleBoard<T>::getBoard() const
{
	return board;
}