#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int b()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(6);
   v.push_back(7);

  cout<<"Search 6 using binary search: "<<binary_search(v.begin(),v.end(),6)<<endl;
   
  return 0;
}