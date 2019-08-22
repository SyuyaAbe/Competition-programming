//仕事のスケジューリング問題
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;//仕事の個数
    int s[n];//始まる時間
    int t[n];//終わりの時間
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++) cin >> t[i];
    pair<int, int> job[n];
    
    for(int i=0;i<n;i++){//終わる時間が早い順にしたい
        job[i].first = t[i];
        job[i].second = s[i];
    }
    sort(job, job+n);
    
    int ans=0,last=0;//lastは最後に選んだ仕事の終わる時間
    for(int i=0;i<n;i++){
        if(last < job[i].second){
            last= job[i].first;
            ans++;
        }
    }

    cout << ans <<endl;
}
