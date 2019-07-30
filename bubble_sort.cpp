#include <bits/stdc++.h>
//#define int long long as ll
using namespace std;

int main(void){
    int n,a[256];
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    
    bool flag =1;
    int ans=0;
    while(flag){
        flag =0;
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
                swap(a[i],a[i-1]);
                flag =1;
                ans++;
            }
        }
    }
    
    for(int i=0;i<n;i++) cout << a[i]<<" \n"[i==n-1];// << endl;
    cout << ans << endl;
    
    return 0;
}