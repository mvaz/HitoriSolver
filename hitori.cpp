#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include "hitori.h"

using namespace std;

//////////////////////////////////////////////////

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

int Matrix::getState(size_t x, size_t y) {
	size_t index = x * this->n + y;
	return this->data[index].getState();
}

void Matrix::setState( size_t x, size_t y, int newState) {
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


/*
 * 
 */
int main() {

	string s;
	int n = 0;	
	int k = 0;
	int j = 0;
	
	// read first line and determine how many numbers there are
	getline( cin, s );
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
		
		getline( cin, s );
	} while ( (++j) < n );
	
	m.print();
	
}