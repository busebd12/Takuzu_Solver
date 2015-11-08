#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
#include "PuzzleBoard.h"
using namespace std;

template <typename T>
auto checkRowForRuleViolations(vector<T> & Row)
{
	
}

template <typename T>
auto checkColumnForRuleViolations(vector<T> & Column)
{
	
}

template <typename T>
auto checkPuzzleForRuleViolations(PuzzleBoard<T> & Board)
{

}

template <typename T>
auto createRowCollection(PuzzleBoard<T> Board)
{
	
}

template <typename T>
auto createColumnCollection(PuzzleBoard<T> Board)
{
	vector<vector<char>> columns;

	int rowCount=0;

	int count=0;

	int rowLength=Board.getBoard()[0].size();

	do
	{	
		vector<char> temp;

		/*
		Loop through the board and put all the elements that makes up the each column
		in a vector and put that vector in a vector of vectors that represents all the columns of the board
		*/
		for(int i=0;i<rowLength;++i)
		{
			temp.emplace_back(Board.getBoard()[i][rowCount]);
		}

		columns.emplace_back(temp);

		temp.clear();

		rowCount++;

		count+=4;
	}
	while(count!=Board.getSize());

	int x;

	int y;

	for(x=0;x<columns.size();++x)
	{
		for(y=0;y<columns[x].size();++y)
		{
			cout << columns[x][y] << " ";
		}
		cout << endl;
	}
}

template <typename T>
auto doPuzzle(PuzzleBoard<T> Board)
{
	/*
	Rules for the logic puzzle:
	You can't put more than two identical numbers next to each other in a row (i.e. you can't have a "111" or "000").
	The number of 1s and 0s on each row and column must match.
	You can't have two identical rows or columns.
	You can have three of the same color diagonally
	*/

	int numberOfZeros=0;

	int numberOfOnes=0;

	cout << "The size of the board is: " << Board.getSize() << endl;

	cout << "The columns of the board are:" << endl;

	createColumnCollection(Board);

}
int main()
{
	PuzzleBoard<char> puzzleBoard;

	puzzleBoard.fillPuzzleBoard("./input.txt");

	puzzleBoard.print();

	doPuzzle(puzzleBoard);
}