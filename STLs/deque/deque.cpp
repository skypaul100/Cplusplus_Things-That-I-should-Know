#include <iostream>
#include<deque>
using namespace std;

int d() {

  deque<int> d;
  d.push_back(1);
  d.push_front(2);
  d.push_back(4);
  d.push_front(3);

  cout<<"All Elts: ";
  for(int i : d){
    cout<<i<<" ";
  }

  d.pop_back();
  cout<<endl<<"After pop from back: ";
    for(int i : d){
    cout<<i<<" ";
  }

  cout<<endl<<"Print elt at 1st index: "<<d.at(1);
  return 0;
}
  