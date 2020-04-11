#ifndef COIN_H
#define COIN_H
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Coin{


 private:

 string sideup;
  
 public:

 Coin();
 void toss();
 string getsideup();
 ~Coin();

};


#endif
