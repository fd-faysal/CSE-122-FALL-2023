

#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
 cin>>a>>b>>c;
 if(a>=b && a>=c) cout<<a<<" is the highest number. ";
 else if(b>=a && b>=c) cout<<b<<" is the highest number. ";
 else cout<<c<<" is the highest number.";
return 0;
}
