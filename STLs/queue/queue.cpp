#include <iostream>
#include<queue>
using namespace std;

int q()
{
 queue<int> q;

 q.push(1);
  q.push(2);
  q.push(3);

cout<<"First element: "<<q.front()<<endl;
q.pop();
  
cout<<"First element after pop: "<<q.front()<<endl;
cout<<"Queue size: "<<q.size();

return 0;


}