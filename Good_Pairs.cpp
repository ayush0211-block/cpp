#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int arr[n];

unordered_map<int,int> mp;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}

int ans=0;
for(auto x:mp){
    ans=ans+(x.second*(x.second-1))/2;
}
cout<<ans<<endl;


}
return 0;
}