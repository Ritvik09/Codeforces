#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c, d, alm;
        cin>>a>>b>>c>>d;
        if(b>=a)
            cout<<b<<endl;
        else if(c-d<=0)
            cout<<-1<<endl;
        else{
            alm = ceil((float)(a-b)/(c-d));
            cout<<b+alm*c<<endl;
        }
    }
}
