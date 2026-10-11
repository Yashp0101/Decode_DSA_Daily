#include <iostream>
using namespace std;

int swap(int n, int *p1, int *p2)
{
     *p2 = n % 10;
     while (n > 10)
     {
          n = n / 10;
     }
     *p1 = n;
}
int main()
{
     int n;
     cout << "Enter number :";
     cin >> n;
     int p1, p2;
     swap(n, &p1, &p2);
     cout << p1 << " " << p2;
}
