#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<=k)
            cout<<1<<endl;
        else{
            int ans = n;
            for(int i=1; i<=sqrt(n); i++){
                if(n%i==0){
                    if(i<=k)
                        ans = min(ans, n/i);
                    if(n/i<=k)
                        ans = min(ans, i);
                }
            }
            cout<<ans<<endl;
        }
    }
}