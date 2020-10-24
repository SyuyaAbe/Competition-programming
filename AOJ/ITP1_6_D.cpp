#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    ll n,m;
    cin >> n >> m;
    ll a[110][110], b[110];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=m;i++) cin >> b[i];
    
    for(int i=1;i<=n;i++){
        ll sum=0;
        for(int j=1;j<=m;j++){
            sum += a[i][j]*b[j];
        }
        cout << sum << endl;
        /*if(j==1) cout << sum;
        else cout << " " << sum;
        cout << endl;*/
    }

    
    return 0;
}
