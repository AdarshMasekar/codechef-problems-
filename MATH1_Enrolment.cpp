#include<iostream>
using namespace std;
int main(){
int T;
cin>>T;
while(T--){
int X,Y;
cin>>X>>Y;
if(X>Y)               //make this condition first (reversing the conditions won't give desired output
cout<<"0"<<endl;
else
cout<<Y-X<<endl;
}
return 0;
}
