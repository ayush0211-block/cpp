#include <bits/stdc++.h>
using namespace std;

void subset(string s, string ans){
      
      if(s.length()==0){

        cout<<ans<<endl;
        return ;  
           
         
      }
      char ch=s[0];
      string ros=s.substr(1);

      subset(ros,ans);
      subset(ros,ans+ch);
      
}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

subset("abc","");



return 0;
}