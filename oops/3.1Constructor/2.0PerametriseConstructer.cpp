#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;

    bike(int tyreSize){
        this->tyreSize = tyreSize;
        cout<<"Perametrised Constructor called"<<endl;
    }
};
int main(){
    bike tvs(17);
    cout<<"Tyre Size: "<<tvs.tyreSize<<endl;
}