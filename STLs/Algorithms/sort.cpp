#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int so()
{
   vector<int> v;
   v.push_back(6);
   v.push_back(2);
   v.push_back(8);
   v.push_back(7);

  cout<<"Before sort: "<<endl;
  for(int i: v)
     cout<<i<<" ";
  sort(v.begin(),v.end());
  cout<<endl<<endl;

  cout<<"After sort: "<<endl;
  for(int i: v)
     cout<<i<<" ";

  
  return 0;
}