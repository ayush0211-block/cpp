#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;

if(n==0){
    cout<<"0";
}
int cnt=0;
for (ll i = 1; i <=n; i++)
{
    for (ll j = 1; j <=n; j++)
    {
        if(i+j==n){
            cnt++
        }
    }
    
}
cout<<cnt;


return 0;
}