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
class b : protected a {//protected inheritance
public:
int b_ka_public;
void show(){
    a_ka_protected=20;//accessible
    cout<<a_ka_protected<<endl;//accessible
    a_ka_public=30;//accessible
    cout<<a_ka_public;//accessible
}
};
int main(){
    b b1;
    b1.b_ka_public=100;//accessible
    //b1.a_ka_protected=200;//not accessible
    //b1.a_ka_public=300;//not accessible
    b1.show();
    return 0;

}