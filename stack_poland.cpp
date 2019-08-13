#include <bits/stdc++.h>
//逆ポーランド記法とスタック
using namespace std;
int main(void){
    string s;
    stack<int> st;
    
    while(cin >>s){
        if(isdigit(s[0])){
            st.push(atoi(s.c_str()));
        } else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            
            if(s=="+") st.push(b+a);
            if(s=="-") st.push(b-a);
            if(s=="*") st.push(b*a);
        }
    }
        
    cout << st.top() << endl;
    
}
