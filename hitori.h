// #include <valarray>
#include <iostream>
#include <string>


class Cell
{
public:
	Cell(int, int, int);
	// virtual ~Cell();
	
	int getX();
	int getY();
	int getState();
	
	void print();
private:
	int x, y, state;
	
};

// 
// class Matrix
// {
// public:
// 	Matrix (size_t);
// 	virtual ~Matrix ();
// 
// private:
// 	/* data */
// 	std::valarray<Cell> data;
// 	
// };


