#include"Matrix.h"
#include<iostream>
using namespace std;


int main(){

 int r,c;

 cout<<"Enter the rows of the matrix: ";
 cin>>r;

 cout<<"Enter the number of columns : ";
 cin>>c;

 

 Matrix m(r,c);
 


 int **p = m.getpointer();

 for(int i = 0; i<r; i++){
  for(int j = 0; j<c; j++){

 
     cout<<"Enter number: ";
     cin>>p[i][j];

    }

  }   


 cout<<"You entered"<<endl;
 for(int i = 0; i<r; i++){
  for(int j = 0; j<c; j++){

 
     cout<<p[i][j]<<"   ";

    }

  cout<<endl;
  }   
      

 cout<<"After post-increment "<<endl<<endl;
 
  Matrix m2(r,c);
   m2 =  m++;
  int **p2 = m2.getpointer();

  for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p2[i][j]<<"   ";

     }


   cout<<endl;
 
  }

cout<<endl<<"Orginal matrix "<<endl<<endl;
for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p[i][j]<<"   ";

     }


   cout<<endl;
 
  }

 
 
 cout<<"After pre-decrement (original matrix returned)"<<endl<<endl;
 
  Matrix m3(r,c);
   m3 =  --m;
  int **p3 = m3.getpointer();

  for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p3[i][j]<<"   ";

     }

     cout<<endl;
 
  }

cout<<"After pre-increment "<<endl<<endl;
 
  Matrix m4(r,c);
   m4 =  ++m;
  int **p4 = m4.getpointer();

  for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p4[i][j]<<"   ";

     }

     cout<<endl;
 
  }

cout<<"After post-decrement "<<endl<<endl;
 
  Matrix m5(r,c);
   m5 =  m--;
  int **p5 = m5.getpointer();

  for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p5[i][j]<<"   ";

     }

     cout<<endl;
 
  }

cout<<endl<<"After post decrement Orginal matrix "<<endl<<endl;
for(int i = 0; i <r; i++){
   for(int j = 0; j<c; j++){

      cout<<p[i][j]<<"   ";

     }


   cout<<endl;
 
  }





return 0;

}
