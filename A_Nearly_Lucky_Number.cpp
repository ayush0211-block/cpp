#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int count=0;
int c1=0;
sort(s.begin(),s.end());

for(int i=0;i<=s.length();i++){

if(s[i]=='4'||s[i]=='7'){
    count++;
     
}else{
    c1++;
    
}
 
}
if(count>=1&c1==0){
    cout<<"YES";
}else{
    cout<<"NO";
}


return 0;
}   