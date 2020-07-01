#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define pb push_back

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define vin(v, n) for (int i = 0; i < (ll)(n); i++) cin >> (v)[i];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,x,e=0,o=0;
        cin>>n>>x;
        vll v(n);
        vin(v,n);
        for(int i=0 ; i<n; i++){
            if(v[i]%2==0)
                e++;
            else
                o++;
        }
        for(int i=0; i<x; i++){
            if((e==x-i && o==i) || (o=x-i && e==i))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
