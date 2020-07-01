#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, sum=0;
        cin>>n;
        for(ll i=1; i<=n/2; i++)
            sum+=i*8*i;
        cout<<sum<<endl;
    }
}
