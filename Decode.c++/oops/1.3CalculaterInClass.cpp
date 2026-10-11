#include <iostream>
using namespace std;
class calculater {
    public:
    int a; 
    int b;
    void add(){
        cout<<"Addition: "<<a + b<<endl;
    }
    void subtract(){
        cout<<"Subtraction: "<<a - b<<endl;
    }
};
int main(){
    calculater calsi;
    calsi.a = 25;
    calsi.b = 5;
    calsi.add();
    calsi.subtract();
}