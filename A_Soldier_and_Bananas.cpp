#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k,w,n;
cin>>k>>w>>n;
int sum=0;
for (int i = 1; i <=n; i++)
{
    sum=sum+k*i;
}
int ans=sum-w;
if(ans>0){
    cout<<ans;
}else
cout<<"0";


return 0;
}