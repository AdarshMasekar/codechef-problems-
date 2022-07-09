//  https://www.codechef.com/submit/AMR15A
#include<iostream>
using namespace std;
int main(){
  int x,y,add=0;
  cin>>x;
  for(int i=0;i<x;i++){
    cin>>y;
    if(y%2==0)
      add+=1;
    else
      add-=1;
  }
  if(add>0)
    cout<<"READY FOR BATTLE"<<endl;
  else
    cout<<"NOT READY"<<endl;
}
