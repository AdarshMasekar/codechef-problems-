#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,x;
	  cin>>n>>x;
	  if(x>=n){
	      cout<<0<<endl;
	  }
	  else{
	      int b=n-x;
	      if(b%4==0){
	          cout<<b/4<<endl;
	      }
	      else{cout<<(b/4)+1<<endl;
	  }
	  }
}
}
