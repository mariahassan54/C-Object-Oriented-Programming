#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
//the private data members

 int rows;
 int columns;
 int **p;

public:

 Matrix(); // a default constructor

 Matrix(int, int); // a parametrized constructor4
 Matrix(const Matrix &); // copy constructor
 void setRows(int r);
 int getRows()const;
 void setCol(int c);
 int getCol()const;
 int** getpointer()const;
 Matrix& operator ++(); //pre-increment
 Matrix& operator ++(int ignoreMe); //post-increment
 Matrix& operator --(); //pre-decrement
 Matrix& operator --(int ignoreMe); //post decrement

 ~Matrix();

};


#endif
