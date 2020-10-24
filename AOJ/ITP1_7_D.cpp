#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    ll n,m,l;
    cin >> n >> m >> l;
    ll a[110][110]={{}}, b[110][110]={{}}, c[110][110]={{}};
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int j=1;j<=m;j++){
        for(int k=1;k<=l;k++){
            cin >> b[j][k];
        }
    }
    
    
    for(int i=1;i<=n;i++){
        for(int k=1;k<=l;k++){
            ll sum=0;
            for(int j=1;j<=m;j++) sum += a[i][j]*b[j][k];
            if(k==1) cout << sum;
            else cout << " " << sum;
        }
        cout << endl;
    }
    return 0;
}

