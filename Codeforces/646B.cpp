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
        int ans=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                if(s[0]=='1' && s.back()=='1' && s.length()>=3)
                    ans++;
            }
        }
        for(int i=1; i<(s.length()-1); i++){
            if(s[i]=='1' && s.length()>=3)
                ans++;
        }
        cout<<ans<<endl;
    }
}
