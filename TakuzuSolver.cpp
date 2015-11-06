#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
#include "PuzzleBoard.h"
using namespace std;

auto doCheckRowForRuleViolations()
{
	
}

auto doCheckColumnForRuleViolations()
{
	
}

auto doCheckPuzzleForRuleViolations()
{

}

auto doCreateRowCollection()
{
	
}

auto doCreateColumnCollection()
{
	
	
}

auto doPuzzle()
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

	//cout << "The size of the board is: " << BoardSize << endl;





}
int main()
{
	PuzzleBoard<char> puzzleBoard;

	puzzleBoard.fillPuzzleBoard("./input.txt");

	puzzleBoard.print();
}