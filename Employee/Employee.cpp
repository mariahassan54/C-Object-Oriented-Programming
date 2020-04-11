#include"Employee.h"
#include<cstring>
#include<cctype>


Employee::Employee(char* n,int i,char* d,char* p){

  name = new char[strlen(n)+1];
  strcpy(name,n);

  department = new char[strlen(d)+1];
  strcpy(department,d);

 position = new char[strlen(p)+1];
  strcpy(position,p);

 id = i;

}
  Employee::Employee(char* n,int i){


  id = i;

  name = new char[strlen(n)+1];
  strcpy(name,n);



}



  Employee::Employee(){


   name = "";
   position = "";
   department = "";

   id = 0;


}
  void Employee::setn(char* n){

   name = new char[strlen(n)+1];
  strcpy(name,n);


}
  void Employee::setd(char* d){



   department = new char[strlen(d)+1];
  strcpy(department,d);


}
  void Employee::setp(char* p ){




   position = new char[strlen(p)+1];
  strcpy(position,p);

}
  void Employee::seti(int i){ id = i;}

  char* Employee::getn(){ return name; }
  char* Employee::getd(){ return department; }
  char* Employee::getp(){ return position; }
  int Employee::getid(){ return id; }

  Employee::~Employee(){


    delete[] name;
    delete[] department;
    delete[] position;


}
