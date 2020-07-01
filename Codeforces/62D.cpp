#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define pb push_back

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define vin(v, n) for (int i = 0; i < (int)(n); i++) cin >> (v)[i];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=0;
    cin>>n;
    for(int i=2; i<n; i++){
        ans += 1*i*(i+1);
    }
    cout<<ans;
}
