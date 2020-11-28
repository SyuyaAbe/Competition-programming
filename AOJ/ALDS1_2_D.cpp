#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,a[1000000], m=0,g[1000000];
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<=n;i=i*3+1) g[m] = i, m++;
    int count=0;
    for(int i=m-1;i>=0;i--){
        for(int j=g[i];j<n;j++){
            int s = a[j];
            int t = j - g[i];
            while(t>=0 && a[t]>s){
                a[t+g[i]] = a[t];
                t = t - g[i];
                count++;
            }
            a[t+g[i]] = s;
        }
    }
    
    cout << m <<endl;
    for(int i=m-1;i>=0;i--){
        cout<<g[i];
        if(i==0) cout << endl;
        else cout << " ";
    }
    cout << count << endl;
    for(int i=0;i<n;i++) cout << a[i] << endl;
    return 0;
}

