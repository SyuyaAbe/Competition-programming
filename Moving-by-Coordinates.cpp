#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x, y, n;
    cin >> x >> y >> n;
    char muki[4] = {'N','E','S','W'};
    
    int count=0;
    
    for(int i=0;i<n;i++){
        char moji;
        cin >> moji;
        
        int LR=1, add=1;
        if(moji=='L'){
            LR = -1;
            add = 3;
        }
        
        if(muki[count%4]=='N'){
            x += LR;
            count += add;
        } else if(muki[count%4]=='S'){
            x -= LR;
            count += add;
        } else if(muki[count%4]=='E'){
            y += LR;
            count += add;
        } else {
        //if(muki[count%4]=='W'){
            y -= LR;
            count += add;
        }
        
        cout << x << " " << y << endl;
    }
    
    
    return 0;
}
