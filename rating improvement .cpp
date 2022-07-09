//  https://www.codechef.com/submit/ADVANCE
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,diff;
        cin>>x>>y;
        diff=y-x;
        if(diff<=200 && diff>=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
