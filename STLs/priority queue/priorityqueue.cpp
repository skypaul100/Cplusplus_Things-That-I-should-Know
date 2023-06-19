#include <iostream>
#include<queue>
using namespace std;

int pq()
{
 //max heap
 priority_queue<int> maxpq;

//min heap
priority_queue<int,vector<int>,greater<int> > minpq;

maxpq.push(1);
maxpq.push(3);
maxpq.push(2);
maxpq.push(0);

int n=maxpq.size();
cout<<"Max heap Size: "<<n<<endl;
cout<<"All elements in max heap: ";
for(int i=0; i<n; i++)
  {
    cout<<maxpq.top()<<" ";
    maxpq.pop();
  }

cout<<endl<<endl;
minpq.push(5);
minpq.push(1);
minpq.push(0);
minpq.push(4);
minpq.push(3);

int m=minpq.size();
cout<<"Min heap Size: "<<m<<endl;
cout<<"All elements in min heap: ";
for(int i=0; i<m; i++)
  {
    cout<<minpq.top()<<" ";
    minpq.pop();//emptie all the queue
  }

cout<<endl<<"Is min heap empty?:  "<<minpq.empty();

return 0;
}