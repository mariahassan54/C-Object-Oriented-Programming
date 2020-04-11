#ifndef Employee_H
#define Employee_H


class Employee{

 private:

  char *name;
  int id;
  char *department;
  char *position;


 public:

  Employee(char*,int,char*,char*);
  Employee(char*,int);
  Employee();
  void setn(char*);
  void setd(char*);
  void setp(char*);
  void seti(int);
  char* getn();
  char* getd();
  char* getp();
  int getid();

  ~Employee();
};


#endif
