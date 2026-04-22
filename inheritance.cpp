#include <bits/stdc++.h>
using namespace std;

class Person{
  public:
    string name;
    int age;

    Person(string name,int age){
      this->name=name;
      this->age=age;
    }

    // void getInfo(){
    //   cout<<"Name: "<<name<<endl;
    //   cout<<"Age: "<<age<<endl;
    // }

    Person(){
      cout<<"Hello  i am the base class\n";
    }

    ~Person(){
      cout<<"this is the basse class desturctor\n";
    }
};


class Student : public Person{
  
  public:
    int rollno;
  
  void getInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Roll no. : "<<rollno<<endl;
  }
  Student(string name,int age,int rollno):Person(name,age){
    this->rollno=rollno;
    cout<<"Hello i am the derived class\n";
  }
  ~Student(){
    cout<<"this is the child class student's destructor\n";
  }
};


int main(){
  // Person p1("Kundan",23);
  // Student s1;
  // s1.name="Kundan";
  // s1.age=23;
  // s1.rollno=33;
  // s1.getInfo();
  Student s1("Kundan",23,33);
  s1.getInfo();

  return 0;
}