#include <iostream>
#include<list>
using namespace std;

int l()
{
 list<int> l;

  l.push_back(1);
  l.push_front(2);
  l.push_back(4);
  l.push_front(3);

  for(int i:l)
     cout<<i<<" ";
  cout<<endl;
  
  l.erase(l.begin());
  cout<<"After Erase: ";
  for(int i:l)
     cout<<i<<" ";
  cout<<endl;

  cout<<"Size of List: "<<l.size()<<endl;

  cout<<"copy list to other list \n";

  list<int> n(l);
  cout<<"New List Elements: ";
  for(int i:l)
     cout<<i<<" ";
  
  return 0;
}