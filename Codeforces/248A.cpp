#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, l, r, ld=0, rd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>r;
        ld+=l;
        rd+=r;
    }
    cout<<min(ld,n-ld)+min(rd,n-rd);
}