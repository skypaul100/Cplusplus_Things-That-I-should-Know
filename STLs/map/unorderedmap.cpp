#include<iostream>
#include<unordered_map>  
// Note: unordered map All operation takes O(1)
//Since, unordered_map<> is implemented using HASH TABLES

using namespace std;

int om(){
  unordered_map<int,string> o;

  o[1]="hello";
  o[8]="play";
  o[3]="hi";

  o.insert({5,"world"});

  for(auto i:o)
     cout<<i.first<<" "<<i.second<<endl;

  return 0;
}
