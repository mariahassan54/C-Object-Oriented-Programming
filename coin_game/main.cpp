/* For this assignment, you will create a game program using the Coin class. The program should have three instances of the Coin
class: one representing a quarter, one representing a dime, and one representing a nickel. When the game begins, your starting balance is $0. During each round of the game, the program will toss the simulated coins. When a coin is tossed, the value of the coin is added to your balance if it lands heads-up. For example, if the quarter lands heads-up, 25 cents is added to your balance. Nothing is added to your balance for coins that land tails-up. The game is over when your balance reaches $1 or more. If your balance
is exactly $1, you win the game. You lose if your balance exceeds $1.
*/

#include"Coin.h"
#include<iostream>
using namespace std;


int main(){


 cout<<"--------------------Tossing Coins for a Dollar Simulator----------------------"<<endl<<endl;


 Coin q(25); //quarter
 Coin d(10); //dime
 Coin n(5);  //nickle

 
 int b = 0;
 while(b < 100){

   
   q.toss();
   cout<<"Tossing the Quarter gives "<<q.getsideup()<<endl;
   d.toss();
   cout<<"Tossing the dime gives "<<d.getsideup()<<endl;
   n.toss();
   cout<<"Tossing the Nickel gives "<<n.getsideup()<<endl<<endl;

 cout<<"Balance (only heads considered) "<<Coin::getbalance()<<endl<<endl; 


  b = Coin::getbalance();
   

  }
  

 if(b == 100)

   cout<<"Congratulations!! You won ^_____^ "<<endl<<endl;

 else

  cout<<"Sorry you lose T_________T "<<endl<<endl;



 return 0;


} 
