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

int Matrix::getValue(size_t x, size_t y) {
	return 1;
}

void Matrix::setValue( size_t x, size_t y, int value) {
	
}

int main() {

	// Cell c( 1, 3);
	// c.print();
		
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
			cout << k << " ";
		}
		cout << endl;
		
		getline( cin, s );
	} while ( (++j) < n );
	
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