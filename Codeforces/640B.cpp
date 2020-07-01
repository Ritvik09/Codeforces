#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int no = n-(k-1);
        if(no>0 && no%2==1){
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
                cout<<"1 ";
            cout<<no<<endl;
            continue;
        }
        int ne = n-2*(k-1);
        if(ne>0 && ne%2==0){
            cout<<"YES"<<endl;
            for(int i=0; i<k-1; i++)
                cout<<"2 ";
            cout<<ne<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}
