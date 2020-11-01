#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main(void){
    double a,b, C;
    cin >> a >> b >> C;
    double c, S, l;
    S = (0.5)*a*b*sin(M_PI*C/180);
    c = sqrt( a*a+b*b-(2.0)*a*b*cos(M_PI*C/180) );
    
    l = a+b+c;
    
    cout << setprecision(8) << S << endl;
    cout << setprecision(8) << l << endl;
    cout << setprecision(8) << S*2/a << endl;
    
    return  0;
}
