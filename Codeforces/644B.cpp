#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, temp=0;
        cin>>n;
        vector<int> s;
        for(int i=0; i<n; i++){
                cin>>a;
                s.push_back(a);
        }
        sort(s.begin(),s.end());
        temp = s[1]-s[0];
        for(int i=0; i<n-1; i++){
            if(s[i+1]-s[i]<temp)
                temp = s[i+1]-s[i];
        }
        if(temp<0)
            cout<<-temp<<endl;
        else
            cout<<temp<<endl;
    }
}
