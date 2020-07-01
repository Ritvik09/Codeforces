#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c, a=0, b=0;
        vector<int> coin;
        cin>>n;
        for(int i=1; i<=n; i++){
            c = pow(2,i);
            coin.push_back(c);
        }
        for(int i=0; i<n/2-1; i++)
            a += coin[i];
            a += coin.back();
        for(int i=n/2-1; i<n-1; i++){
            b += coin[i];
            }
        cout<<a-b<<endl;
    }
}
