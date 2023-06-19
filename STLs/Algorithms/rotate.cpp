#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int rot()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(6);
   v.push_back(7);
cout<<"Before Rotate: ";
for(int i: v)
   cout<<i<<" ";
cout<<endl;
rotate(v.begin(), v.begin()+1, v.end());
  cout<<"After Rotate: ";
  for(int i: v)
   cout<<i<<" ";
  
   
  return 0;
}