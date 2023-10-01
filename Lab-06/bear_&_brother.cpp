 

#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int l,b;
   cin >> l >> b;
   long long int count=0;
   while(1){
    if(l>b) break;
    l*=3;
    b*=2;
    count++;
    
   }

cout<<count;
   return 0;
}
