#include <bits/stdc++.h>
using namespace std;

int main(void){
    //入力
    int n;
    cin >> n;
    int s[n];
    for(int i=0;i<n;i++) cin >> s[i];
    int q;
    cin >> q;
    int count=0,temp;
    for(int i=0;i<q;i++){
        cin >> temp;
        for(int j=0;j<n;j++){
            if(temp == s[j]){
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    
}

