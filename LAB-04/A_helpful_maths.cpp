#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   vector<char>v;
   queue<char>st;
      
 
   for(int i=0;i<s.size();i++){
    if(i%2==0) v.push_back(s[i]);
   }
sort(v.begin(),v.end());
 
for(int i=0;i<v.size();i++){
     st.push(v[i]);
     if(i<v.size()-1)
     st.push('+');
}
while(!st.empty()){
    cout<<st.front();
    st.pop();
}
   return 0;
}
