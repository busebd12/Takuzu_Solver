#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

auto doReadInput(const string & Filename)
{
	ifstream file;

	file.open(Filename.c_str());

	vector<vector<char>> input;

	string line;

	while(file >> line)
	{
		vector<char> temp;

		move(line.begin(), line.end(), back_inserter(temp));

		input.emplace_back(temp);
	}

	return input;
}

auto doPuzzle(const vector<vector<char>> & Board, int BoardSize)
{
	/*
	Rules for the logic puzzle:
	You can't put more than two identical numbers next to each other in a line (i.e. you can't have a "111" or "000").
	The number of 1s and 0s on each row and column must match.
	You can't have two identical rows or columns.
	You can have three of the same color diagonally
	*/

	int numberOfZeros=0;

	int numberOfOnes=0;

	cout << "The size of the board is: " << BoardSize << endl;



}

auto printBoard(const vector<vector<char>> & Board)
{
	//for_each(Board.cbegin(), Board.cend(), [] (const auto & v) { copy(v.cbegin(), v.cend(), ostream_iterator<string>(cout, " "));});
	int i;

	int j;

	for(i=0;i<Board.size();++i)
	{
		for(j=0;j<Board[i].size();++j)
		{
			cout << Board[i][j] << " ";
		}
		cout << endl;
	}
}

auto getBoardSize(const vector<vector<char>> & Board)
{
	size_t size=0;

	int i;

	for(i=0;i<Board.size();++i)
	{
		size+=Board[i].size();
	}

	return size;
}

int main()
{
	vector<vector<char>> board=doReadInput("./input.txt");

	printBoard(board);

	auto boardSize=getBoardSize(board);

	cout << endl;

	doPuzzle(board, boardSize);
}