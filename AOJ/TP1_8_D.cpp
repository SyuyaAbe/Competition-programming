#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main(void){
    string s,p;
    cin >> s >> p;
    bool flag = false;
    
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=0;j<p.size();j++){
            if(s[(i+j)%s.size()]==p[j%p.size()]) count++;
        }
        if(count==p.size()) flag = true;
    }
    
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
