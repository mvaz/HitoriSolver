#include <valarray>


class Cell
{
public:
	Cell(int, int, int);
	Cell(): x(0), y(0), state(0) {};
	Cell(const Cell&);
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

