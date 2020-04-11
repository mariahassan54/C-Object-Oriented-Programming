#include"Coin.h" 
#include<iostream>
using namespace std;


 
Coin::Coin(){

   unsigned seed = time(0);
   srand(seed);

   int s = rand()%2 +1;

    if(s ==1)
     sideup = "head";

    else

      sideup = "tail";


}

 
 void Coin::toss(){

  
  

   int s = rand()%2 +1;

    if(s ==1)
     sideup = "head";

    else

      sideup = "tail";

  }

 
 string Coin::getsideup(){return sideup;}
Coin:: ~Coin(){

  cout<<"Destructor is running"<<endl;

}
