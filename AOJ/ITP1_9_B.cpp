#include <bits/stdc++.h>
using namespace std;
int main(void){
    char s[1001];
    int length, m, h;
    
    while(true){
        cin >> s;
        if(s[0]=='-') break;
        
        length = 0;
        for(int i=0;s[i]!='\0';i++) length++;
        cin >> m;
        int count = 0;
        for(int i=0;i<m;i++){
            cin >> h;
            s[count+length] = s[count];
            count++;
        }
        
        for(int i=0;i<length;i++){
            cout << s[i+count];
        }
        cout << endl;
    }
    return  0;
}
