#include<iostream>
using namespace std;
class student{  
    public:
    string name;
    int age;
    float gpa;
};
int main(){
    student s1;
    s1.name="John";
    s1.age=20;
    s1.gpa=8.5;
    cout<<"Name: "<<s1.name<<endl<<"Age: "<<s1.age<<endl<<"GPA: "<<s1.gpa<<endl;
    return 0;
}