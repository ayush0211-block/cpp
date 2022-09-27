#include <bits/stdc++.h>
using namespace std;

void subseq(string s, string ans){
    
       if(s.length()==0){
        cout<<ans<<endl;
        return;
       }

        char ch=s[0];
        string ros=s.substr(1);
        
        subseq(ros,ans);
        subseq(ros,ans+ch);
      

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

subseq("123","");

return 0;
}