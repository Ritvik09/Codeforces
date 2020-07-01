#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b)
            cout<<pow(a+b,2)<<endl;
        else if(a>b){
                if(b==1)
                    cout<<a*a<<endl;
                else if(a>b*2)
                    cout<<pow(a,2)<<endl;
                else
                    cout<<pow(2*b,2)<<endl;
        }
        else if(a<b){
                if(a==1)
                    cout<<b*b<<endl;
                else if(b>a*2)
                    cout<<pow(b,2)<<endl;
                else
                    cout<<pow(2*a,2)<<endl;
        }
    }
}
