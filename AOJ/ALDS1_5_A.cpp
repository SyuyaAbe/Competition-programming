#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

int n;
int a[100];
bool check(int x, int y){
    if(y==0) return true;
    if(x==n||y<0) return false;
    return check(x+1, y)||check(x+1,y-a[x]);
}

int main(void){
    int q;
    cin >> n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>q;
    int m[q];
    for(int i=0;i<q;i++) cin>>m[i];
    for(int i=0;i<q;i++){
        //cout<<(check(0,m[i])?"yes":"no")<<endl;
        if(check(0,m[i])) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}

