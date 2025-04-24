#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int>s;

   s.insert(50);
   s.insert(30);
   s.insert(20);
   s.insert(89);
   s.insert(78);

//print all the element

   for(int ele:s){
         cout<<ele<<" ";
      }
//find the target
   int target=59;
   if(s.find(target)!=s.end()){
      cout<<"element  exit ";
   }
   else{
      cout<<" element does not exit ";
   }


   return 0;
}