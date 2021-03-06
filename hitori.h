#include <valarray>
#include <iosfwd>


class Cell
{
public:
	enum State { none, black, white};
	
	// public constructor
	Cell(int n, State s): number(n), state(s) {};
	// public default constructor
	Cell(): number(0), state(none) {};
	// public copy constructor
	Cell(const Cell& c): number(c.number), state(c.state) {};
	// public destructor
	~Cell() {};
	
	int getNumber() const { return this->number; };
	State getState() const { return this->state; };
	void setState(State newState) { this->state = newState; }
	void setNumber(int newNumber) { this->number = newNumber; }
	
	void print();
	
private:
	int number;
	State state;
	
};



class Action
{
public:
	// public constructor
	Action(int a, int b, Cell::State s): x(a), y(b), state(s) {};
	// public default constructor
	Action(): x(0), y(0), state(Cell::none) {};
	// public copy constructor
	Action(const Action& a): x(a.x), y(a.y), state(a.state) {};
	// public destructor
	~Action() {};
	
	
	int getX();
	int getY();
	int getState();
	
	void print();
private:
	int x, y;
	Cell::State state;
	
};

class Matrix
{
public:
	Matrix(int);
	// ~Matrix();
	void print();
	void setNumber(size_t, size_t, int value);
	void setState(size_t, size_t, Cell::State state);
	int getNumber(size_t, size_t);
	Cell::State getState(size_t, size_t);
	
	bool repeatedInColumn(size_t, int);
	bool repeatedInRow( size_t, int);
	
	bool isValid();
	
	static Matrix newFromStream(std::istream&);
	
private:
	int n;
	// std::valarray< std::valarray<Cell> > data;
	// std::valarray< Cell > data( Cell(0,0,0), 1);
	std::valarray< Cell > data;
	
	// invariants
	// 1. no two blacks side by side?
	bool noTwoBlacksSideBySide();
	// 2. in each row, column, only one of each number is marked white
	bool noTwoWhitesInColumn(size_t);
	bool noTwoWhitesInRwo(size_t);
	bool pathBetweenEveryCell(size_t);
	
};

