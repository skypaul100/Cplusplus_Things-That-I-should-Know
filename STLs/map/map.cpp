#include<iostream>
#include<map>  
// Note: ordered map() All operation takes O(logn)
//Since, map() is implemented using BALANCED TREES

using namespace std;

int m(){
  map<int,string> m;

  m[1]="hello";
  m[8]="play";
  m[3]="hi";

  m.insert({5,"world"});

  for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

  cout<<"Finding 8-> "<<m.count(8)<<endl;
  m.erase(1);
  cout<<"After erase: "<<endl;
  for(auto i:m)
     cout<<i.first<<" "<<i.second<<endl;
  return 0;
}