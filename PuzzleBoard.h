#ifndef PUZZLEBOARD_H
#define PUZZLEBOARD_H
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>

template <typename T>
class PuzzleBoard
{
	private:
		std::vector<std::vector<T>> board;
		size_t size;

	public:
		PuzzleBoard();
		void fillPuzzleBoard(const std::string & Filename);
		void print() const;
		int getSize() const;
};

//include the implementation file to avoid linker errors associated with templated classes
#include "PuzzleBoard.cpp"

#endif