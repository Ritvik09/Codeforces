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
        ll a,b,cnt=0;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else{
            if(a>b){
                while(a>b){
                            if(a%8==0 && a/b >= 8){
                                a/=8;
                                cnt++;
                            }
                            else if(a%4==0 && a/b < 8 && a/b >= 4){
                                a/=4;
                                cnt++;
                            }
                            else if(a%2==0 && a/b < 4 && a/b >=2){
                                a/=2;
                                cnt++;
                            }
                            else
                                break;
                }
            }

            else if(a<b){
                while(a<b){
                            if(b/a >= 8){
                                a*=8;
                                cnt++;
                            }
                            else if(b/a < 8 && b/a >= 4){
                                a*=4;
                                cnt++;
                            }
                            else if(b/a < 4 && b/a >=2){
                                a*=2;
                                cnt++;
                            }
                            else
                                break;
                }
            }
            if(a==b)
                cout<<cnt<<endl;
            else
                cout<<-1<<endl;
        }
    }
}
