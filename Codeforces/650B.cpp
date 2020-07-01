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
        int n,odd=0,even=0,mis=0;
        cin>>n;
        vll a(n);
        vin(a, n);
        for(int i=0; i<n; i++){
            if(i%2!=a[i]%2)
                mis++;
        }
        if(n%2==0){
            for(int i=0; i<n; i++){
                if(a[i]%2==0)
                    even++;
                else
                    odd++;
            }
            if(odd==even)
                cout<<mis/2<<endl;
            else
                cout<<-1<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(a[i]%2==0)
                    even++;
                else
                    odd++;
            }
            if(odd+1==even)
                cout<<mis/2<<endl;
            else
                cout<<-1<<endl;
        }
    }
}
