#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cnt=0,sz;
   cin>>n;
    sz=n;
   stack<char>s;
   while(n--){
    char c;
    cin>>c;
    if(s.empty())
        s.push(c);
    else{
        if(s.top()!=c)
            s.push(c);
    }    
   }
   while(!s.empty()){
    cnt++;
    s.pop();
   }
   cout<<sz-cnt;
   return 0;
}
