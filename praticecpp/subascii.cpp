#include <bits/stdc++.h>
using namespace std;

void subseq(string s, string ans){
    
       if(s.length()==0){
        cout<<ans<<endl;
        return;
       }

        char ch=s[0];
        string ros=s.substr(1);
        int code=ch;
        subseq(ros,ans);
        subseq(ros,ans+ch);
        subseq(ros,ans+to_string(code));  
      

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

subseq("ABCD","");

return 0;
}