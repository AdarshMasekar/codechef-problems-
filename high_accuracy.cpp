// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%3==0)
            cout<<"0"<<endl;
        if(x%3==1)
            cout<<"2"<<endl;
        if(x%3==2)
            cout<<"1"<<endl;
    }
    return 0;
}
