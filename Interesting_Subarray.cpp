#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ts;
cin>>ts;
while (ts--){

int n;
cin>>n;
int arr[n];
int maxno=INT_MIN;
int minno=INT_MAX;
int a;
int b;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    maxno=max(maxno,arr[i]);
    minno=min(minno,arr[i]);
}

cout<<minno*minno<<" "<<maxno*maxno<<endl;
}
return 0;
}