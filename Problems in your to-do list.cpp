#include <iostream>

using namespace std;

int main()
{
    int t;
    int a,i,n;
    cin>>t;
   while(t--){
        cin>>n;
        int r=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            
            if(a>=1000){
                r++;
            }
            
        }
         cout<<r<<endl;
       
    }
    return 0;
}
