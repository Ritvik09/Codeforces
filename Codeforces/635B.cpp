#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        if(x<=10){
            if(m>=1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }

        if(x>10 && x<=20){
            if(m>=2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }

        for(int i=0; i<n; i++)
            x = floor(x/2) + 10;
        for(int i=0; i<m; i++)
            x -= 10;
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
