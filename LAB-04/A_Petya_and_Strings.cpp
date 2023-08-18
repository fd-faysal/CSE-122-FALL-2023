


#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,b;
   cin >> a >> b;

    for(int i=0;i<a.size();i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }
        if(b[i]>=65 && b[i]<=90){
            b[i]+=32;
        }
    }

   int i=0,flagA=0,flagB=0;

   
   for(int i=0;i<a.size();i++){
    if(a[i]>b[i]){
        flagA=1;
        break;
    }
    else if(a[i]<b[i]){
        flagB=1;
    }

   }
    

    if(flagB) cout<<-1;
    else if(flagA) cout<<1;
    else cout<<0; 
   return 0;
}