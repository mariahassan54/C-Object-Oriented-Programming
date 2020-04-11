#ifndef COIN_H
#define COIN_H
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Coin{


 private:

 string sideup;
 static int balance;
 int value;
 
 public:

 Coin(int val);
 void toss();
 string getsideup();
 static int getbalance();
 void bal();
 
 ~Coin();

};




#endif
