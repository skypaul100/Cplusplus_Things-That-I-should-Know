#include <iostream>
#include<vector>
using namespace std;

int v() {
  
 vector<int> v;
  //intially empty then size is 0
  //everytime new entry it copies the new element
  //AND DOUBLES the size of vector
  
  v.push_back(1);//to insert
  cout<<"Pushed (1)"<<endl;
  cout<<"Capacity: "<<v.capacity()<<endl<<endl;

  cout<<"Pushed (2)"<<endl;
  v.push_back(2);
  cout<<"Capacity: "<<v.capacity()<<endl<<endl;

  cout<<"Pushed (3)"<<endl;
  v.push_back(3);
  cout<<"Capacity: "<<v.capacity()<<endl<<endl;

  cout<<"Pushed (4)"<<endl;
  v.push_back(4);//here 4 elt vector size is 4
  cout<<"Capacity: "<<v.capacity()<<endl<<endl;

  cout<<"Pushed (5)"<<endl;
  v.push_back(5);//for 5th elt copies to new vector and doubles the size of vectr
  cout<<"Capacity: "<<v.capacity()<<endl<<endl;
  cout<<"Actual size is:"<<v.size()<<endl<<endl;

  cout<<"Front Elt: "<<v.front()<<endl;
  cout<<"End Elt: "<<v.back()<<endl<<endl;
  
  cout<<"Before Pop: ";
 for(auto i:v){
     cout<<i<<" ";
 }

  v.pop_back();
  
  cout<<endl<<"After Pop:";
   for(int i:v){
     cout<<i<<" ";
 }

  v.clear();
  cout<<endl<<endl<<"After clear size:"<<v.size();
  
 
return 0;
}

