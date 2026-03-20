#include<iostream>
using namespace std;
class a{
   private:
   int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
};
class b : protected a {//a_ka_protected , a_ka_public become protected in class b
public:
int b_ka_public=5 ;
   void show(){

  a_ka_protected=20;

  
    cout<<a_ka_protected<<endl;
  }
};
class c: public b{//a_ka_protected is accessible here as protected in class b
    public:
    int c_ka_public;
    void add(){
        c_ka_public= 15;
        cout<<c_ka_public<<endl;
        cout<<b_ka_public<<endl;
    }
};
int main(){
   c c1;
   c1.add();
}