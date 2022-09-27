#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int x,y,z;
cin>>x>>y>>z;

if(x==y==z==1||x==y==1||y==z==1||x==z==1){
    cout<<x+y+z;
}

return 0;
}