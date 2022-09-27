#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,p,x,y;
cin>>n>>p>>x>>y;

int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int sum=0;
for (int i=n-1; i > 0; i--)
{
     while(p--){
      if(arr[i]==0){
        sum=sum+y;
      }else
      sum=sum+x;

     }

}

cout<<sum;

return 0;
}