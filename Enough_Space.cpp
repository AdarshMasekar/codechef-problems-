#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,y,z;
    cin>>n>>x>>y;
    if((x+2*y)>n)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
  }
  return 0;
}
