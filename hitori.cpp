#include <cstdlib>
#include <iostream>
#include <string>

#include "hitori.h"


using namespace std;



//////////////////////////////////////////////////
Cell::Cell(int x, int y, int state) {
	this->x = x;
	this->y = y;
	this->state = state;
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
	
	
	// valarray< int > data(n);
	this->data = new valarray<int>(n);
	// valarray<Cell> data(n);
	
	// for(size_t i = 0; i < this->n; ++i)
	// {
	// 	data[i] = 
	// }
}

void Matrix::print() {
	for(size_t i = 0; i < this->n; ++i)
	{
		cout << this->data[i] << endl;
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