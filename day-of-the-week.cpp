#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y, m, d;
    cin >> y >> m>> d;
    int days;
    
    if(m < 3){
        y--;
        m += 12;
    }
    days = 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 428;
    
    if(days<0) return 0;
    
    switch(days%7){
    case 0:
        cout << "日曜日" << endl;
        break;
    case 1:
    　　cout << "月曜日" << endl;
    　　break;
    case 2:
    　　cout << "火曜日" << endl;
    　　break;
    case 3:
    　　cout << "水曜日" << endl;
    　　break;
    case 4:
    　　cout << "木曜日" << endl;
    　　break;
    case 5:
    　　cout << "金曜日" << endl;
    　　break;
    case 6:
    　　cout << "土曜日" << endl;
    　　break;
    }
    
    /*if(y%4==0){
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
    }*/
    
    
    return 0;
}
