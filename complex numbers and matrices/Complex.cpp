#include"Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(){

  cout<<"Default constructor called"<<endl;
   real = 0.0;
   imaginary = 0.0;


}
Complex::Complex(double r,double i){


  cout<<"Parametrised constructor called"<<endl;

  real = r;
   imaginary = i;


}

void Complex::setReal(double r){

  real = r;


}
double Complex::getReal()const{

 return real;

}

void Complex::setImaginary(double i){

 imaginary = i;

}
double Complex::getImaginary() const{

 return imaginary;

}

bool Complex::operator!()const{



   if(real == 0 && imaginary == 0)

      return true;


  else

     return false;



}

Complex::~Complex(){


  cout<<"Destructor is running "<<endl;


}

