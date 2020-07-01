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

    int q;
    cin>>q;
    while(q--){
        int c,m,x;
        cin>>c>>m>>x;
        if(min(min(c,m),x) == c)
            cout<<c<<endl;
        else if(min(min(c,m),x) == m)
            cout<<m<<endl;
        else{
            int ans = x;
            c -= x;
            m -= x;
            if(c>=2*m)
                ans += m;
            else if(m>=2*c)
                ans += c;
            else{
                int lar = max(c,m);
                int sma=  min(c,m);
                int diff = lar - sma;
                ans += diff;
                lar -= diff*2;
                sma -= diff;
                ans += 2*(lar/3);
                lar = lar%3;
                if(lar == 2)
                    ans += 1;
            }
            cout<<ans<<endl;
        }
    }
}
