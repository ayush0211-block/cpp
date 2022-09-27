#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++){
    cin>>arr[i];
}
ll cnt=0;
ll sum=0;
for (ll i = 1; i < n; i++)
{

      while(arr[i]<arr[i-1]){
         
         arr[i]=arr[i]+1;
        cnt++;
      }
      
    
}
cout<<cnt;


return 0;
}