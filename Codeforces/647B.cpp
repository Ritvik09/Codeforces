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

    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        vll v(n);
        vin(v, n);
        sort(all(v));

        for(int i=1; i<=1024; i++){
            vll vi(n);
            for(int j=0; j<n; j++){
                vi[j]=v[j]^i;
            }
            sort(all(vi));

            if(v==vi){
                cout<<i<<endl;
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<-1<<endl;
    }
}
