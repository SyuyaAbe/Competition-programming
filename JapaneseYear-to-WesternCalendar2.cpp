#include <bits/stdc++.h>
using namespace std;
int main(void){
    int y,m,d;
    cin >> y >> m >> d;
    int t, result, years;
    char *nengo[] = { "明治", "大正", "昭和", "平成", "令和" };
    
    t = y * 10000 + m * 100 + d;
	
	if (t < 19120730) {
		result = 0;
		y -= 1867;
	} else if (t < 19261225) {
		result = 1;
		y -= 1911;
	} else if (t < 19890108) {
		result = 2;
		y -= 1925;
	} else if (t < 20190431) {
		result = 3;
		y -= 1988;
	} else {
		result = 4;
		y -= 2018;
	}
    
    if(y==1){
        cout << nengo[result] << "元年" << m << "月" << d << "日" << endl;
    } else if(y!=1){
        cout << nengo[result] << y << "年" << m << "月" << d << "日" << endl;
    }
    
    return 0;
}
