#include<iostream>
#include<algorithm>
using namespace std;
int sw()
{
int a=10;
int b=20;

  cout<<"Before Swap:"<<endl;
  cout<<"a="<<a<<"  b="<<b;
  swap(a,b);
  cout<<endl;
  cout<<"After Swap:"<<endl;
  cout<<"a="<<a<<"  b="<<b;
  return 0;
}