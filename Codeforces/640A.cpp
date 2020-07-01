#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int pow=1;
        while(n>0){
            if(n%10>0){
                ans.push_back((n%10)*pow);
            }
            n/=10;
            pow*=10;
        }
        cout<<ans.size()<<endl;
        for(auto num: ans)
            cout<<num<<" ";
        cout<<endl;
    }
}
