#include <bits/stdc++.h>
using namespace std;

int n, W;
int dp[100][100];
int w[100], v[100];

int rec(int i, int j){//i番目以降の物が重さの和がj以下になるように選ぶ
    if(dp[i][j]>=0) return dp[i][j];
    int res;
    if(i==n){
        res=0;
    } else if(j<w[i]){
        res = rec(i+1, j);
    } else {
        res = max(rec(i+1, j), rec(i+1, j-w[i])+v[i] );//入れない場合と入れる場合
    }
    return dp[i][j] = res;
}

int main(void){
    //int n, W;
    cin >> n;
    //vector<int> w(n), v(n);
    for(int i=0;i<n;i++) cin >> w[i];
    for(int i=0;i<n;i++) cin >> v[i];
    cin >> W;
    //int dp[n+1][W+1];
    
    memset(dp, -1, sizeof(dp));
    cout << rec(0, W) << endl;
    return 0;
}
