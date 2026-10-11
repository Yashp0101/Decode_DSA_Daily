#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int i = 1;
    int j = 1;
    int fib;
    for (int k = 3; k <= n; k++)
    {
        fib = i + j;
        i = j;
        j = fib;
    }
    cout << "fibonacci is: " << fib;
}
