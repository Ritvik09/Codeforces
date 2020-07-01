#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, ans=0;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        for(int i=0; i<n; i++){
            int an;
            cin>>an;
            a.push_back(an);
        }
        for(int j=0; j<n; j++){
            int bn;
            cin>>bn;
            b.push_back(bn);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                if(a[i]<b[j] && k>0){
                    swap(a[i],b[j]);
                    k--;
                }
            }
        }
        for(int i=0; i<n; i++){
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
}
