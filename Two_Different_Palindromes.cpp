#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int x,y;
cin>>x>>y;

if(x%2==1&&y%2==1){
    cout<<"NO"<<endl;
}
else if(x==1 && y==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}


return 0;
}