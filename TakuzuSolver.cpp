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





}
int main()
{
	PuzzleBoard<char> puzzleBoard;

	puzzleBoard.fillPuzzleBoard("./input.txt");

	puzzleBoard.print();

	doPuzzle(puzzleBoard);
}