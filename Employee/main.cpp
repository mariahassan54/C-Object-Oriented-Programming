#include"Employee.h"
#include<iostream>
#include<cstring>
#include<cctype>

#include<iomanip>
using namespace std;



int main(){

 Employee *p;
 p = new Employee[3];

 char name[20], position[20], department[40];
 int id;
 
 for(int i = 0; i<3; i++){

   cout<<"Enter name of employee "<<i+1<<" : ";
   cin.getline(name,20);

   cout<<"Enter ID of employee "<<i+1<<" : ";
   cin>>id;

   cin.ignore();
   cout<<"Enter position of employee "<<i+1<<" : ";
   cin.getline(position,20);


   cout<<"Enter department of employee "<<i+1<<" : ";
   cin.getline(department,40);

   cout<<endl;

   p[i].setn(name);
   p[i].setp(position);
   p[i].setd(department);
   p[i].seti(id);


 }

cout<<"___________________________________________________________________________"<<endl;
cout<<"Name"<<setw(20)<<"ID Number"<<setw(25)<<"Department"<<setw(20)<<"Position"<<endl;
cout<<"___________________________________________________________________________"<<endl;

 for(int i = 0; i<3; i++){

         cout<<p[i].getn()<<setw(15)<<p[i].getid()<<setw(20)<<p[i].getd()<<setw(28)<<p[i].getp()<<endl;
  cout<<endl;
   
}

return 0;

}
