#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, j;
    cin >> n;
    //string taro, hanako;
    char taro[110], hanako[110];
    int taro_p=0, hanako_p=0;
    
    for(int i=0;i<n;i++){
        cin >> taro >> hanako;
        for(j=0;taro[j]!='\0'&&hanako[j]!='\0'&&taro[j]==hanako[j];j++);
            if(taro[j]=='\0'){
                if(hanako[j]=='\0'){
                    taro_p++;
                    hanako_p++;
                } else {
                    hanako_p+=3;
                }
            } else if(hanako[j]=='\0'){
                taro_p+=3;
            } else if(hanako[j]>taro[j]){
                hanako_p+=3;
            } else {
                taro_p+=3;
            }
            
    }
    cout << taro_p << " " << hanako_p << endl;
    
    return  0;
}
