#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int ts;cin>>ts;
while(ts--){

int n;cin>>n;
vector<ll> arr(n);

int cnt=0;
int ze=0;

for ( ll i=0; i <n; i++)
{
    cin>>arr[i];
}
for(auto i:arr){
    
    if(i<0){
        cnt++;
    }
    
    if(i==0){
        ze=1;
    }
}
if(cnt%2==0||ze==1){
    cout<<"0"<<endl;
}else
cout<<"1"<<endl;
}
return 0;
}