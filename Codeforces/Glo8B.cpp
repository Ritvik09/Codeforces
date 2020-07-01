#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define pb push_back

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define vin(v, n) for (int i = 0; i < (ll)(n); i++) cin >> (v)[i];

ll product(vll v)
{
    ll num = 1;
    for(int i=0;i<10;i++)
    {
        num*=v[i];
    }
    return num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, temp=0;
    cin>>k;
    vll v;

    for(int i=0; i<10; i++)
        v.push_back(1);

    while(product(v) < k){
        v[temp++]++;
        if(temp>9)
            temp = 0;
    }

    for(int i=1;i<=v[0];i++)
        cout << "c";
    for(int i=1;i<=v[1];i++)
        cout << "o";
    for(int i=1;i<=v[2];i++)
        cout << "d";
    for(int i=1;i<=v[3];i++)
        cout << "e";
    for(int i=1;i<=v[4];i++)
        cout << "f";
    for(int i=1;i<=v[5];i++)
        cout << "o";
    for(int i=1;i<=v[6];i++)
        cout << "r";
    for(int i=1;i<=v[7];i++)
        cout << "c";
    for(int i=1;i<=v[8];i++)
        cout << "e";
    for(int i=1;i<=v[9];i++)
        cout << "s";
    cout << endl;
}
