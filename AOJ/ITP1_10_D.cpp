#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[110], y[110];
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) cin >> y[i];
    
    double ans1=0, ans2=0, ans3=0, ans4=0;
    
    //p=1
    for(int i=0;i<n;i++) ans1 += abs(x[i]-y[i]);
    cout << fixed << setprecision(6) << ans1 << endl;
    
    //p=2
    for(int i=0;i<n;i++) ans2 += pow(abs(x[i]-y[i]),2);
    cout << fixed << setprecision(6) << sqrt(ans2) << endl;
    
    //p=3
    for(int i=0;i<n;i++) ans3 += pow(abs(x[i]-y[i]),3);
    cout << fixed << setprecision(6) << pow(ans3, 1.0/3.0) << endl;
    
    //p=infinity
    int temp[110], max;
    for(int i=0;i<n;i++) temp[i] = abs(x[i]-y[i]);
    max = temp[0];
    for(int i=1;i<n;i++){
        if(temp[i]>max) max = temp[i];
    }
    ans4 = max;
    
    cout << fixed << setprecision(6) << ans4 << endl;
    
    return 0;
    
}
