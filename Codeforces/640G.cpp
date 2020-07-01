#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<4)
            cout<<"-1"<<endl;
        else{
            for(int i=n; i>=1; i--){
                if(i%2==1)
                    cout<<i<<" ";
            }
            cout<<"4 2 ";
            for(int i=5; i<=n; i++){
                if(i%2==0)
                    cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
