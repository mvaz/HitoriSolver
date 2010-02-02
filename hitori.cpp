#include <iostream>
#include <cstdlib>
#include "hitori.h"


using namespace std;

Cell::Cell(int x, int y, int state) {
	this->x = x;
	this->y = y;
	this->state = state;
}

int Cell::getX() { return this->x; }
int Cell::getY() { return this->y; }
size_t Cell::getState() { return state; }

int main() {
	
	// create the lists
	// list<int> firstLine;


	Cell zbr( 1, 2, 3);
	
	cout << "created cell" << endl;
	cout << "x " << zbr.getX() << endl;
	cout << "y " << zbr.getY() << endl;
	// cout << "s " << zbr.getState() << endl;
	// // initialize them
	// while ( )
	// for(size_t i = 0; i < numberOfBins; ++i)
	// {
	// 	listArray[i].push_back(i);
	// }
	// Table table( numberOfBins );

}