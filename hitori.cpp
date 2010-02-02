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
	// 
	this->n = n;
	
	data.resize(n);
	// this->data = oinc;
	// valarray< int > data(n);
	// data = new valarray<int>(n);
	// valarray<Cell> data(n);
	
	cout << "...." << endl;
	for(size_t i = 1; i < this->n; ++i)
	{
		// this->data[i].print();
	}
}

void Matrix::print() {
	for(size_t i = 0; i < this->n; ++i)
	{
		this->data[i].print();
	}
}


int main() {

	// Cell c( 1, 3);
	// c.print();
	// 
	// Matrix m(3);
	// m.print();
	
	// read first line and determine how many 
	string s;
	getline( cin, s );
	
	istringstream iss( s, istringstream::in);

	int k = 0, n = 0;
	while ( iss >> k) {
		n++;
		cout << k << endl;
	}
		

	// 
	// int k = 0;
	// while ( scanf("%d", &k) == 1 ) {
	// 	cout << k << endl;
	// }
	// cout << "s " << zbr.getState() << endl;
	// // initialize them
	// while ( )
	// for(size_t i = 0; i < numberOfBins; ++i)
	// {
	// 	listArray[i].push_back(i);
	// }
	// Table table( numberOfBins );

}