#include <valarray>


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


class Matrix
{
public:
	Matrix(size_t);
	// ~Matrix();
private:
	size_t n;
	std::valarray<Cell> data;
};

