// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


class Teacher{
  private:
    double salary;
  public:
  //properties or attributs
  //member functions or methods

    string name;
    string subject;
    string dept;
    void changeDepat(string newDept){
      dept=newDept;
    }
    //setter function
    void setSalary(double s){
      salary =s;
    }
    //getter function
    double getSalary(){
      return salary;
    }


    
};
  
int main(){
  Teacher t1;
  t1.name="Kundan";
  // t1.salary=29000;
  t1.dept="cse";
  t1.subject="dbms";
  t1.setSalary(25000);
  cout<<t1.getSalary()<<endl;
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;

  return 0;
}