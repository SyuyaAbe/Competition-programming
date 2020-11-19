#include <bits/stdc++.h>
using namespace std;

void print(char str[], int a, int b){
    for(int i=a;i<=b;i++) cout << str[i];
    cout << endl;
}

void replace(char str[], char p[], int a, int b){
    for(int i=0;i<b-a+1;i++) str[a+i] = p[i];
}

void reverse(char str[], int a, int b){
    while(a<b) swap(str[a++], str[b--]);
}

int main(void){
    //string str;
    char str[1001];
    char p[1001];
    char func[10];
    //string func;
    int q, a, b;
    cin >> str;
    cin >> q;
    
    for(int i=0;i<q;i++){
        cin >> func >> a >> b;
        switch(func[2]){
		case 'i':
			print(str,a,b);
			break;
		case 'v':
			reverse(str,a,b);
			break;
		case 'p':
		    cin >> p;
			replace(str,p,a,b);
			break;
        /*if(func=="print"){
            print(str,a,b);
            break;
        } else if(func=="reverse"){
            cin >> p;
            reverse(str,p,a,b);
            break;
        } else if(func=="replace"){
            replace(str,a,b);
            break;
        }*/
        }
    }
    
    
    return 0;
}
