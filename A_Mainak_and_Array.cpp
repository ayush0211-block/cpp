#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);

int sum;
sum=arr[n-1];
cout<<sum-arr[0]<<endl;
}




return 0;
}