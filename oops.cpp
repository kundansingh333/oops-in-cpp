// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


class Teacher{
  public:
  //properties or attributs
    string name;
    string subject;
    string dept;
    double salary;
  //member functions or methods
    void changeDepat(string newDept){
      dept=newDept;
    }


    
};
  
int main(){
  Teacher t1;
  t1.name="Kundan";
  t1.salary=29000;
  t1.dept="cse";
  t1.subject="dbms";
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;

  return 0;
}