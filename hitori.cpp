#include <cstdlib>
#include <iostream>
#include <string>

#include "hitori.h"


using namespace std;



//////////////////////////////////////////////////

Cell::Cell(const Cell& c) {
	this->x = c.x;
	this->y = c.y;
	this->state = c.state;
}

int Cell::getX() { return this->x; }
int Cell::getY() { return this->y; }
int Cell::getState() { return state; }
void Cell::print() {
	string separator = ", ";
	cout << "x: " << this->x << separator
	     << "y: " << this->y << separator
	     << "state: " << this->state << endl;
}

//////////////////////////////////////////////////
Matrix::Matrix(int n) {
	this->n = n;
	
	// valarray< Cell > oinc(n);
	data.resize(n);
	// this->data = oinc;
	// valarray< int > data(n);
	// data = new valarray<int>(n);
	// valarray<Cell> data(n);
	
	// for(size_t i = 0; i < this->n; ++i)
	// {
	// 	data[i] = 
	// }
	cout << "...." << endl;
	for(size_t i = 1; i < this->n; ++i)
	{
		// Cell x = oinc[i];
			// this->data[i].print();
	}
	// cout << "...." << endl;
}

void Matrix::print() {
	for(size_t i = 0; i < this->n; ++i)
	{
		this->data[i].print();
	}
}



int main() {

	Cell zbr( 1, 2, 3);
	zbr.print();
	
	Matrix oinc(3);
	oinc.print();
	// cout << "s " << zbr.getState() << endl;
	// // initialize them
	// while ( )
	// for(size_t i = 0; i < numberOfBins; ++i)
	// {
	// 	listArray[i].push_back(i);
	// }
	// Table table( numberOfBins );

}