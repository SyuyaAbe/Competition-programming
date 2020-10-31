#include <bits/stdc++.h>
using namespace std;
int main(void){
    char s[10001];
    int length, m, h;
    
    while(true){
        cin >> s;
        if(s[0]=='-') break;
        
        length = 0;
        for(int i=0;s[i]!='\0';i++) length++;
        cin >> m;
        int count = 0;
        for(int j=0;j<m;j++){
            cin >> h;
            for(int k=0;k<h;k++){
                s[count+length] = s[count];
                count++;
            }
        }
        
        for(int l=0;l<length;l++){
            cout << s[l+count];
        }
        cout << endl;
    }
    return  0;
}
