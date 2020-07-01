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

    int n,x;
    cin>>n;
    vll v(100000, 0);
    int maxval=0;
    for(int i=0; i<n; i++){
            cin>>x;
            v[x]++;
            if(v[x]>maxval)
                maxval = v[x];
    }
    if(maxval<=(n+1)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
