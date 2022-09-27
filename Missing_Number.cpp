#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n;
cin>>n;
int arr[n];
for (int i = 1; i <n; i++)
{
    cin>>arr[i];
}

int sum=((n)*(n+1))/2;

for(int i=1;i<n;i++){

    sum=sum-arr[i];
}
cout<<sum;



return 0;
}