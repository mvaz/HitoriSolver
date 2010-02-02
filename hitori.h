#include <valarray>


class Cell
{
public:
	// public constructor
	Cell(int a, int b, int c): x(a), y(b), state(c) {};
	// public default constructor
	Cell(): x(0), y(0), state(0) {};
	// public copy constructor
	Cell(const Cell&);
	// public destructor
	~Cell() {};
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
	Matrix(int);
	// ~Matrix();
	void print();
private:
	int n;
	// std::valarray< std::valarray<Cell> > data;
	// std::valarray< Cell > data( Cell(0,0,0), 1);
	std::valarray< Cell > data;
};

