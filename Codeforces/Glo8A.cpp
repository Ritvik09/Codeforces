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
        int a,b,n,cnt=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
                cnt++;
            }
            else{
                a+=b;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
