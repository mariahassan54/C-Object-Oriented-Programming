#include"Coin.h" 
#include<iostream>
using namespace std;


 int Coin::balance = 0; 
 
Coin::Coin(int val){

   unsigned seed = time(0);
   srand(seed);

   int s = rand()%2 +1;

    if(s ==1)
     sideup = "head";

    else

      sideup = "tail";


   value = val;

  // cout<<"(Constructor) "<<sideup<<endl;

}

void Coin::bal(){

     balance += value;

}


 
 void Coin::toss(){

 // cout<<endl<<"In function toss balance is "<<balance<<"sideup is "<<sideup<<endl;
   int s = rand()%2 +1;

    if(s == 1)
     sideup = "head";

    else

      sideup = "tail";

   if(sideup == "head")
     bal();

   // cout<<endl<<"In function toss balance is "<<balance<<"sideup is "<<sideup<<endl;

  }

 
 string Coin::getsideup(){return sideup;}

int Coin::getbalance(){return balance;}

    
Coin::~Coin(){

  cout<<"Destructor is running"<<endl;

}
