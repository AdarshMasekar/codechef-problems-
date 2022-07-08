#include<iostream>
using namespace std;
int main(){
  int p1,p2,p3,p4,goal=0;
  cin>>p1>>p2>>p3>>p4;
  if(p1>=10)
    goal+=1;
   if(p2>=10)
    goal+=1;
   if(p3>=10)
    goal+=1;
   if(p4>=10)
    goal+=1;
  cout<<goal<<endl;
  return 0;
}
  
