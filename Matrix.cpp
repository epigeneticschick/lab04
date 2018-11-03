/* Matrix.cpp defines Matrix class methods.
 * Student Name: Lorrayya Williams
 * Date: October 3, 2018
 * Begun by: Joel Adams, for CS 112 at Calvin College.
 */

#include "Matrix.h"
using namespace std;

// Default Constructor
Matrix::Matrix() {
	myRows = myColumns = 0;
}

//Accessor for Rows
const unsigned Matrix::getRows() const{
	return myRows;
}


//Accessor for Columns
const unsigned Matrix::getColumns() const{
	return myColumns;
}

// Explicit Constructor
Matrix::Matrix(unsigned rows, unsigned columns) {
            myRows = rows;
            myColumns = columns;
            myVec.setSize(rows);
            for (unsigned i = 0; i < rows; i++) {
                myVec[i].setSize(columns);
                for(unsigned a = 0; a < columns; a++){
                	myVec[i][a];
                }
            }

}

//read [] operator
const Vec<Item>& Matrix::operator[](unsigned index) const{
	if(index >= myRows){
		throw range_error("The index number  is too large");

	}

	else{
		return myVec[index];
	}

}

//write [] operator
Vec<Item>& Matrix::operator[](unsigned index){
	if(index >= myRows){
			throw range_error("The index number is too large");
		}

		else{
			return myVec[index];
		}



}


bool Matrix::operator==(const Matrix& m2) const {
   if ( myRows != m2.getRows() || myColumns != m2.getColumns() ) {
        return false;
   } else {
        return myVec == m2.myVec;
   }
}

