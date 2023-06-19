// Online C++ compiler to run C++ program online
#include <iostream>
#include<array>
using namespace std;

int a() {
  
 array<int,4> a={1,2,3,4};
  
 int n=a.size();
  cout<<"Front: "<<a.front()<<endl;
  cout<<"Back: "<<a.back()<<endl;
  cout<<"All elements: ";
 for(int i=0 ; i<n ; i++){
     cout<<a[i]<<" ";
 }
 
return 0;
}