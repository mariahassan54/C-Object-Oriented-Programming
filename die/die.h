#ifndef DIE_H
#define DIE_H

class Die{


 private:

  int sides;
  int value;


 public:



  Die(int x = 6);
  int getsides();
  int getvalue();

  void roll();



};


#endif
