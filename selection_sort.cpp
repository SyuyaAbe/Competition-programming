#include <bits/stdc++.h>
//選択ソート
using namespace std;
int main(void){
    int n,count=0;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++) cin >> l[i];
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(l[j]<l[min]) min = j;
        }
        if(min != i){
            swap(l[i], l[min]);
            count++;
        }
    }
    
    for(int i = 0; i < n; i++){
		if(i != n-1){
		    cout << l[i] << " ";
		}else{
		    cout << l[i] << endl;
		}
	}
    cout << count << endl;
    
}
