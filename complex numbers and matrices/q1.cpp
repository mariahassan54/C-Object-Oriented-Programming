#include"Complex.h"
#include<iostream>
using namespace std;
int main(){


  Complex a;

  double r, i;

 cout<<"Enter the real part of the complex number: ";
 cin>>r;


  cout<<"Enter the imagionary part of the complex number: ";
 cin>>i;


  a.setReal(r);

 a.setImaginary(i);


  cout<<"Enter the real part of 2nd complex number: ";
 cin>>r;


  cout<<"Enter the imagionary part of 2nd complex number: ";
 cin>>i;


 Complex b(r,i);


  cout<<"Using unary ! operator on the 2nd complex number "<<endl<<endl;


 if(!b)

  cout<<"The real and imagionary parts are zero"<<endl<<endl;


 else

  cout<<"The real and imaginary parts are nonzero"<<endl<<endl;
 


 return 0;

}
