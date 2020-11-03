#include <bits/stdc++.h>
using namespace std;
int n, q, s[100000], sum=0;

int binary_search(int key ){
    int left=0, right=n, mid;
    while(left<right){
        mid = (left+right)/2;
        if(s[mid]==key) return 1;//key1を発見
        if(key>s[mid]) left=mid+1;
        else if(key<s[mid]) right=mid;
    }
    return 0;
}

int main(){ 
    cin >> n;
    for(int i=0;i<n;i++) cin >> s[i];
    
    cin >>q;
    int t;
    for(int i=0;i<q;i++){
        cin >> t;
        if(binary_search(t)) sum++;
    }
    cout << sum << endl;
    return 0;
} 
