#include"Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix(){ // a default constructor


 //cout<<"Default constructor was called"<<endl<<endl;
 rows = 0;
 columns = 0;

 p = nullptr;


}
Matrix::Matrix(int r, int c){// a parametrized constructor4


 //cout<<"Para constructor was called"<<endl<<endl;
 rows = r;
 columns = c;

 p = new int*[rows];

 for(int i =0; i<rows; i++)

    p[i] = new int[columns];

  for(int i =0; i<rows; i++){
   for(int j = 0; j<columns; j++){
        
        p[i][j] = 0;

       }
      
   }

}
Matrix::Matrix(const Matrix &v){ // copy constructor

 rows = v.rows;
 columns = v.columns;
 p = new int*[rows];
 for(int i = 0; i<rows; i++){

    p[i] = new int[columns];

}

 for(int i = 0; i<rows; i++){
   for(int j = 0; j<columns; j++){
         p[i][j] = v.p[i][j];


      }

    }

}

 void Matrix::setRows(int r){

    rows = r;

}

int** Matrix::getpointer()const{


  return p;


}
int Matrix::getRows()const{return rows;}

void Matrix::setCol(int c){ columns = c;}

int Matrix::getCol()const{ return columns;}

Matrix& Matrix::operator++(){ //pre-increment

 for(int i = 0; i<rows; i++){
  for(int j = 0; j<columns;j++){

     p[i][j] +=1;

   }

 } 


 return *this;
}
Matrix& Matrix::operator++(int ignoreMe){//post-increment

 Matrix *temp  = new Matrix(rows,columns);
 
 for(int i = 0; i<rows; i++){
   for(int j  =0; j<columns; j++){

       temp->p[i][j] = p[i][j];
       p[i][j]++;

       }
     }

 return *temp;

}
Matrix& Matrix::operator--(){ //pre-decrement

 for(int i = 0; i<rows; i++){
  for(int j = 0; j<columns;j++){

     p[i][j] -=1;

   }

 } 


 return *this;



}
Matrix& Matrix::operator--(int ignoreMe){//post decrement


 Matrix *temp  = new Matrix(rows,columns);
 
 for(int i = 0; i<rows; i++){
   for(int j  =0; j<columns;j++){

       temp->p[i][j] = p[i][j];
       p[i][j] -=1;

       }
     }

 return *temp;

}
Matrix::~Matrix(){


 cout<<"Destructor is running"<<endl;


}
