#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int ts;
cin>>ts;
while(ts--){
int n,mx;
cin>>n>>mx;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    
}
int sum=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]>mx/2){
        sum=sum+abs(arr[i]-1);
    }else
    sum=sum+abs(arr[i]-mx);
}
cout<<sum<<endl;
}



return 0;
}