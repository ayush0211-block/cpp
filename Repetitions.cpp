/*#include <bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

map<char,int> freq;

string s;
cin>>s;


for (const char &c: s) {
        freq[c]++;
    }
int maxx=INT_MIN;
for(auto x:freq){
    
    maxx=max(maxx,x.second);
      

}
cout<<maxx;

return 0;
}*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;

int maxx=INT_MIN;
int cnt=0;

for (ll i = 0; i < s.length(); i++)
{
    for (ll j = 0; i < s.length(); j++)
    {
        if(s[j]=s[j+1]){
            cnt++;
        }
        
    }
    maxx=max(cnt,maxx);
    
    
}
cout<<maxx;


return 0;
}