#include <bits/stdc++.h>
using namespace std;

class Teacher{
  private:
    double salary;
  public:
    string name;
    string dept;
    string subject;

    void changeDept(string dept){
      this->dept=dept;
    }

    //setter function
    void setSalary(double s){
      salary=s;
    }
    //getter function
    double getSalary(){
      return salary;
    }
    //non-parameterized constructor
    Teacher(){
      cout<<"Hello I am non-parameterized constructor\n";
    }
    //parameterized constructor
    Teacher(string name,string dept,string subject,double salary){
      cout<<"hi, i am parameterized constructor\n";
      this->name=name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
    }

    //copy constructor

    Teacher(Teacher &orgObj){
      cout<<"Hello I am copy constructor!!!";
      this->name=orgObj.name;
      this->subject=orgObj.subject;
      this->dept=orgObj.dept;
      this->salary=orgObj.salary;

    }
    

  
};

class Student{
  public:
    string name;
    // double cgpa;
    double *cgpaPtr;

    Student(string name,double cgpa){
      cout<<"Hello i, am parameterized constructor of student class\n";
      this->name=name;
      cgpaPtr=new double;
      *cgpaPtr=cgpa;
    }
    //deep copy
    Student(Student &obj){
      this->name=obj.name;
      cgpaPtr=new double;
      *cgpaPtr=*obj.cgpaPtr;
    }

    void getInfo(){
      cout<<"Name : "<<name<<endl;
      cout<<"Cgpa : "<<*cgpaPtr<<endl;
    }
    //Destructor
    ~Student(){
      cout<<"Hello I'm the destructor";
      delete cgpaPtr;  //prevents from the memory leak 
    }
};

int main(){
  // Teacher t1("Kundan","full-stack","cse",25000);
  // t1.name="Kundan";
  // t1.subject="cse";
  // t1.dept="Full-stack";
  // t1.setSalary(25000);
  // Teacher t2(t1);
  // cout<<t2.name<<endl;
  // cout<<t2.getSalary()<<endl;

  // *******STUDENT**********
  Student s1("Kundan",9.4);
  // s1.getInfo();
  // Student s2(s1);
  // s1.getInfo();
  // *(s2.cgpaPtr)=8.9;
  // s1.getInfo();
  // s2.getInfo();

  s1.getInfo();
    

  
  return 0;
};