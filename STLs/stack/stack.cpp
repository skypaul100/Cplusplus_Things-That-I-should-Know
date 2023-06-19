#include<iostream>
#include<stack>
using namespace std;

int s()
{
 stack<int> s;
 s.push(1);
  s.push(2);
  s.push(3);

  cout<<endl;
  cout<<"Top Element: "<<s.top();
  cout<<endl;
  s.pop();
  cout<<"Top element after pop: "<<s.top();

  cout<<endl<<"Size of Stack: "<<s.size();

  cout<<endl<<"Empty or not: "<<s.empty();
  
  return 0;
}