#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, m;
    cin >> y >> m;
    int sum=0;
    bool flag;
    
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                flag = true;//yes
            } else {
                flag = false;//no
            }
        } else {
            flag = true;//yes
        }
    } else {
        flag = false;//no
    }
    
    if(m==4||m==6||m==9||m==11){
        sum+=30;
    }else if(m==2){
        if(flag) sum+=29;
        else sum+=28;
    } else {
        sum+=31;
    }
    cout << sum << endl;
    return 0;
}
