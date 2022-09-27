#include <bits/stdc++.h>
//#include& lt; bits / stdc++.h & gt;
#include<algorithm>
#include<string>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
int upper=0;int lower=0;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]>='A'&&s[i]<='Z'){
        upper++;
    }else
    lower++;
}

if(upper>lower){
   transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;

}else{
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout<<s;
}
return 0;
}