/* Matrix.h provides a class for manipulating 2-dimensional vectors.
 * Student Name: Lorrayya Williams
 * Date: October 3, 2018
 * Begun by: Joel Adams, for CS 112 at Calvin College.
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include "Vec.h"
#include <iostream>
#include <fstream>
using namespace std;

typedef double Item;

class Matrix {
public:
	Matrix();
	const unsigned getRows() const;
	const unsigned getColumns() const;
	Matrix(unsigned rows, unsigned columns );
	const Vec<Item>& operator[](unsigned index) const;
	Vec<Item>& operator[](unsigned index);
	bool operator==(const Matrix& m2) const;
	bool operator!=(unsigned index);

private:
	unsigned         myRows;
	unsigned         myColumns;
	Vec< Vec<Item> > myVec;
	friend class MatrixTester;
;

};



#endif
