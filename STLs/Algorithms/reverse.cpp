#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int rev()
{
  string str="abcde";
  cout<<"Before Reverse : "<<str<<endl;
  reverse(str.begin(),str.end());
  cout<<"After Reverse: "<<str;

  
   
  return 0;
}