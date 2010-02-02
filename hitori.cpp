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
Matrix::Matrix(size_t n) {
	this->n = n;
}




int main() {

	Cell zbr( 1, 2, 3);
	zbr.print();
	
	
	// cout << "s " << zbr.getState() << endl;
	// // initialize them
	// while ( )
	// for(size_t i = 0; i < numberOfBins; ++i)
	// {
	// 	listArray[i].push_back(i);
	// }
	// Table table( numberOfBins );

}