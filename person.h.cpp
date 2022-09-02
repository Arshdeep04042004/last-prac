person.h
#include<iostream>
#include <string>
using namespace std;
class Person{
public:
Person();
Person(int mySalary, string myName); 
int money;
string name;
void setName(string myName);         // changing the name of person 
string getName();
void setSalary(int mySalary);        // changing the persons salary
int getSalary();
~Person();
};
.cpp
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person :: Person(){
   money = 1000;
   name = "Default";
}
Person::Person(int mySalary, string myName){
    money = mySalary;
    name  = myName;
}
void Person :: setName(string myName){
  name = myName;
}
string Person :: getName(){
  return name;
  }

void Person :: setSalary(int mySalary){
    money = mySalary;
}
int Person :: getSalary(){
    return money;
}
Person::~Person()
{

}