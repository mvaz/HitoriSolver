#include <cstdlib>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>

#include "hitori.h"

using namespace std;

//////////////////////////////////////////////////

ostream& operator<<(ostream& os, const Cell::State &d) {
	switch(d) {
		case Cell::none:
			return os<<"none";
		case Cell::black:
			return os<<"black";
		case Cell::white:
			return os<<"white";
		default:
			return os<<"Unknown";
	}
}


void Cell::print() {
	string separator = ", ";
	cout << "number: " << this->number << separator
	     << "state: " << this->state << endl;
}

void Action::print() {
	string separator = ", ";
	cout << "x " << this->x << separator <<
	        "y " << this->y << separator <<
			"state " << this->state << endl;
}

//////////////////////////////////////////////////
Matrix::Matrix(int n) {
	this->n = n;	
	data.resize(n*n);
	for(size_t i = 1; i < this->n; ++i)
	{
		this->data[i].setNumber(0);
	}
}

void Matrix::print() {
	for(size_t i = 0; i < this->n; ++i)
		this->data[i].print();
}

Cell::State Matrix::getState(size_t x, size_t y) {
	size_t index = x * this->n + y;
	return this->data[index].getState();
}




void Matrix::setState( size_t x, size_t y, Cell::State newState) {
	size_t index = x * this->n + y;
	this->data[index].setState(newState);
}

int Matrix::getNumber(size_t x, size_t y) {
	size_t index = x * this->n + y;
	return this->data[index].getNumber();
}

void Matrix::setNumber( size_t x, size_t y, int newValue) {
	size_t index = x * this->n + y;
	this->data[index].setNumber(newValue);
}


bool Matrix::repeatedInColumn(size_t col, int value) {
	size_t count = 0;
	
	assert( col < this->n );
	
	for(size_t i = 0; i < this->n; ++i)
		if (this->getNumber(i, col))
			count++;
	
	return count > 1;
}

bool Matrix::repeatedInRow( size_t row, int value) {
	size_t count = 0;
	
	assert( row < this->n );
	
	for(size_t j = 0; j < this->n; ++j)
		if (this->getNumber( row, j))
			count++;
	
	return count > 1;
	
}

// TODO: Check the functioning of the stream classes
//  change the signature of the method, so that it gets an input stream
Matrix Matrix::newFromStream(std::istream &ist) {
	
	string s;
	int n = 0;	
	int k = 0;
	int j = 0;
	
	// read first line and determine how many numbers there are
	getline( ist, s );
	istringstream iss( s, istringstream::in);

	while ( iss >> k)
		n++;
	// initialize m
	Matrix m( n );	

	do {
		istringstream iss( s, istringstream::in);
		
		for( size_t i = 0; i < n ; i++) {
			iss >> k;
			m.setNumber(j,i,k);
		}
		
		getline( ist, s );
	} while ( (++j) < n );
	
	
	return m;
}
/*
 * 
 */
int main() {

	// Matrix *x = Matrix::newFromStream(cin);
	Matrix m = Matrix::newFromStream(cin);
	m.print();
	// x->print();
	// 
	// cout << x->repeatedInRow(0,2) << endl;
	// cout << x->repeatedInColumn(0,2) << endl;
	// solve the puzzle
	
}