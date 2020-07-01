#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, o=0, e=0;
        cin>>a;
        vector<int> v;
        for(int i=0; i<a; i++){
            int n;
            cin>>n;
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<a; i++){
            if(v[i]%2==0)
                e++;
            else
                o++;
        }
        if(e%2==0 && o%2==0)
            cout<<"YES"<<endl;
        else{
            int c=0;
            for(int i=0; i<a-1; i++){
                if(v[i+1]-v[i]==1 && ((v[i+1]%2==0 && v[i]%2!=0) || (v[i+1]%2!=0 && v[i]%2==0)))
                   c++;
            }
            if(c>=1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
