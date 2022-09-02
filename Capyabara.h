#include <iostream>
#include <string>
#include "Person.h"

using namespace std;
int main(){
    Person s1 = Person();
    s1.setName("Yuvraj");
    s1.setSalary(6000);
    Person s2 = Person();
    s2.setName("Arsh");
    s2.setSalary(8000);
    cout << s1.getName() <<" "<< s1.getSalary() << endl;
    cout << s2.getName() <<" "<< s2.getSalary() << endl;

    return 0;
