#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,a,one=0,two=0;
        
        cin>>a;
        for(i=0;i<a;i++){
            string b;
            cin>>b;
            if(b=="START38"){
                one=one+1;  
            }
            if(b=="LTIME108"){
                two=two+1;  
            }
        }
        cout<<one<<" "<<two<<endl;
    }
    return 0;
}
