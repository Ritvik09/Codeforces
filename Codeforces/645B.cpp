#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=n-1; i>=0; i--){
            if(v[i]<=i+1){
                ans = i+1;
                break;
            }
        }
        cout<<ans+1<<endl;
    }
}
