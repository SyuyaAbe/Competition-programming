#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //vector<double> s(n);
    double s[1100];
    double ave, sum;
    
    while(true){
        cin >> n;
        if(n==0) break;
        sum = 0;
        
        for(int i=0;i<n;i++){
            cin >> s[i];
            sum += s[i];
        }
        double ave = sum/n;
        double ans = 0;
        
        for(int i=0;i<n;i++){
            ans += pow(s[i]-ave,2);//(s[i]-ave)*(s[i]-ave);
        }
        cout<<fixed<< setprecision(10) << sqrt(ans/n) << endl;
    }
    return 0;
    
}
