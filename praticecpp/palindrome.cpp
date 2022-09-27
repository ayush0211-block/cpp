#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int n,int i){
      
      if(i>=n/2){
        return true;
      }
      if(s[i]!=s[n-i-1]){
        return false;
      }
     palindrome(s,n,i+1);


}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;

bool ring=palindrome( s,s.size(),0);
if(ring){
    cout<<"Palindrome ";
}else{
cout<<" NOT palindrome";
}


return 0;
}