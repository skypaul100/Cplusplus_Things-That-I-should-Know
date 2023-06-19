#include <iostream>
#include<set>
using namespace std;

int sswe()
{
 //max heap
set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(3);
  s.insert(0);

  for(int i: s)
    cout<<i<<" ";

  set<int>::iterator it=s.begin();
  it++; // at 2nd elt
  
  s.erase(it);

  cout<<endl<<"Elts after erase: ";
  for(int i:s)
     cout<<i<<" ";

return 0;
}
