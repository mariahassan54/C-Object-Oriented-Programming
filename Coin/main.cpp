#include"Coin.h"
#include<iostream>
using namespace std;


int main(){


 cout<<"--------------------Coin Simulator----------------------"<<endl<<endl;


 Coin c;
 int h =0, t = 0;
 string s;
 for(int i =0; i<20;i++){

    c.toss();
    s=c.getsideup();
    cout<<"Toss "<<i+1<<" : "<<s<<endl<<endl;

  
    if(s=="head")

        h++;

     else

        t++;



 }



 cout<<"Total heads = "<<h<<endl;

  cout<<"Total tails = "<<t<<endl;


 return 0;


} 
