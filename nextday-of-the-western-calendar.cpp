#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, m, d;
    cin >> y >> m>> d;
    int d_sum=0;
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
        d_sum=30;
    }else if(m==2){
        if(flag) d_sum=29;
        else d_sum=28;
    } else {
        d_sum=31;
    }
    
    if(d+1>d_sum && m+1!=13){
        cout << y << " " << m+1 << " " << 1 << endl;
    }else if(d+1>d_sum && m+1==13){
        cout << y+1 << " " << 1 << " " << 1 << endl;
    } else {
        cout << y << " " << m << " " << d+1 << endl;
    }
    
    
    return 0;
}
