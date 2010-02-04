#include <valarray>


class Cell
{
public:
	// public constructor
	Cell(int n, int s): number(n), state(s) {};
	// public default constructor
	Cell(): number(0), state(0) {};
	// public copy constructor
	Cell(const Cell& c): number(c.number), state(c.state) {};
	// public destructor
	~Cell() {};
	
	int getNumber() const { return this->number; };
	int getState() const { return this->state; };
	int setState(int newState) { this->state = newState; }
	int setNumber(int newNumber) { this->number = newNumber; }
	
	void print();
private:
	int number, state;
	
};


class Action
{
public:
	// public constructor
	Action(int a, int b, int c): x(a), y(b), state(c) {};
	// public default constructor
	Action(): x(0), y(0), state(0) {};
	// public copy constructor
	Action(const Action& a): x(a.x), y(a.y), state(a.state) {};
	// public destructor
	~Action() {};
	
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
	void setNumber(size_t, size_t, int value);
	void setState(size_t, size_t, int state);
	int getNumber(size_t, size_t);
	int getState(size_t, size_t);
private:
	int n;
	// std::valarray< std::valarray<Cell> > data;
	// std::valarray< Cell > data( Cell(0,0,0), 1);
	std::valarray< Cell > data;
};

