#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c, cost=0;
    cin>>n>>m;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<m; i++){
        if(a[i]<0)
            cost += a[i];
    }
    cout<<-cost<<endl;
}
