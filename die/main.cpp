#include"die.h"
#include<iostream>
using namespace std;

int main(){



 int die1 = 6;
 int die2 = 12;


 const int rolls = 5;


 Die d1(die1), d2(die2);

 cout<<"Simulating rolling of a "<<d1.getsides()<<" sided die and "<<d2.getsides()<<" sided die "<<endl<<endl;


 cout<<"Initial value of the die: "<<endl<<endl;

 cout<<"die 1 = "<<d1.getvalue()<<endl;
 cout<<"die 2 = "<<d2.getvalue()<<endl;



 cout<<"Rolling the die "<<rolls<<" times"<<endl<<endl;


 for(int i = 0; i<rolls; i++){


   d1.roll();
   d2.roll();


 
  cout<<"d1 = "<<d1.getvalue()<<endl;
 cout<<"d2 = "<<d2.getvalue()<<endl<<endl;   


 }
return 0;

}
