#include <bits/stdc++.h>
using namespace std;

int main(void){
   string w, t;
   cin >> w;
   
   for(int i=0;i<w.size();i++) w[i] = tolower(w[i]);
   int count=0;
   
   while(1){
       cin >> t;
       //if(strcmp(t, "END_OF_TEXT")) break;
       if(t=="END_OF_TEXT") break;
       for(int i=0;i<t.size();i++) t[i] = tolower(t[i]);
       if(w==t) count++;
   }
 
   cout << count << endl;
   return 0;
}

