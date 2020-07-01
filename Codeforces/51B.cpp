#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    scanf("%lld%lld",&l,&r);
    printf("YES\n");
    for(ll i=l; i<r; i+=2)
        printf("%lld %lld\n",i,i+1);
}
