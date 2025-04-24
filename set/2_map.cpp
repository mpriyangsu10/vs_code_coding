#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
   unordered_map<string,int>m;

// process 1 to insert value
pair<string,int>p1;
p1.first="priyangsu";
p1.second=45;
m.insert(p1);

//another process
m["jeet"]=1;
m["mistu"]=2;
m["iron"]=3;

for(auto ele:m){
   cout<<ele.first<<" "<<ele.second<<endl;
}



   return 0;
}