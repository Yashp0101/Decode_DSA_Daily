// all types of constructor in a single program 
#include<iostream>
using namespace std;
 class custumer{
    public:
    string name;
    int age; 
    int acc_no;

        custumer(){// default constructor
            name = "yas";
            age = 21;
            acc_no = 123456;
        }

        custumer( string name , int age , int acc_no){// parameterized constructor
            this->name = name ;
            this->age  = age;
            this->acc_no = acc_no;
        }

        custumer( string n , int a ){ // constructor overloading
            name = n;
            age = a;
        }

        custumer(custumer &b){// copy constructor
            name = b.name;
            age = b.age;
            acc_no = b.acc_no;
        }

         void display(){
            cout<<name<<" "<<age<<" "<<acc_no<<endl;
        }
 };

 int main(){
    custumer a1;
    custumer a2( "vishal" , 77 , 893455);//  a2 = custumer("john", 30, 654321);  
    custumer a3( "rahul" , 25);
    a1.display();
    a2.display();
    a3.display();
    custumer a4(a3);// copy constructor
    a4.display();
 }