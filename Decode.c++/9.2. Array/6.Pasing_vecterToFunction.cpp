#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(5);
  v.push_back(8);
  v.push_back(11);
  v.push_back(15);
  for (size_t i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}