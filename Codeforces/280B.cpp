#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, l, temp=0;
    vector<double> v;
    cin>>n>>l;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<(n-1); i++){
        if(v[i+1]-v[i]>temp)
            temp = v[i+1]-v[i];
    }
    cout<<fixed<<showpoint<<setprecision(10)<<max(temp/2, max(v[0], l-v[n-1]))<<endl;
}
