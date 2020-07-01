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
        ll n,m,cnt=0;
        cin>>n>>m;
        int a[100][100];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        //solving
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    if(a[i][j]==0){
                        bool emp = true;
                        for(int k=0; k<n; k++){
                            if(a[k][j]==1){
                                emp = false;
                                break;
                            }
                        }
                        if(emp == true){
                            for(int k=0; k<m; k++){
                                if(a[i][k]==1){
                                    emp = false;
                                    break;
                                }
                            }
                        }
                        if(emp == true){
                            a[i][j]=1;
                            cnt++;
                        }
                    }
            }
        }
        if(cnt%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;
    }
}
