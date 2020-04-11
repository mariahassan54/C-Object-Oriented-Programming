#include<cstdlib>
#include<ctime>
#include"die.h"
#include<iostream>
using namespace std;


Die::Die(int t){

 unsigned seed = time(0);

 srand(seed);


 sides = t;

 roll();
 


}


void Die::roll(){


 value = rand()%(sides-1)+1;




}


int Die::getsides(){

 
 return sides;


}

int Die::getvalue(){


 return value;


}
