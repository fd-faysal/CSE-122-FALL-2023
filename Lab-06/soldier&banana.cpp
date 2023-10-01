 

#include<bits/stdc++.h>
using namespace std;
int main(){
   
   long long int n,k,w,price=0;
   cin >> k >> n >> w;

    for(int i=1;i<=w;i++){
        price+=(k*i);
    }
   long long int res=price-n;
   if(res>0) cout<<res;
   else cout<<0;
   return 0;
}
