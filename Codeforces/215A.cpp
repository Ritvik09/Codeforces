#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, a, b, temp=0, ig=0;
    vector<int> bp;
    vector<int> rw;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        bp.push_back(a);
    }
    cin>>m;
    for(int j=0;j<m;j++){
        cin>>b;
        rw.push_back(b);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rw[j]%bp[i]==0 && rw[j]/bp[i]>temp){
                    temp=rw[j]/bp[i];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rw[j]/bp[i]==temp && rw[j]%bp[i]==0){
                ig++;
            }
        }
    }
    cout<<ig<<endl;
}
