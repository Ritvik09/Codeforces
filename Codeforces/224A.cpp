#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, a1, b1, c1;
    cin>>a>>b>>c;
    a1 = sqrt((a*b)/c);
    b1 = sqrt((b*c)/a);
    c1 = sqrt((a*c)/b);
    cout<<(a1+b1+c1)*4;
}
