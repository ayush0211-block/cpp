#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int w,x,y,z;
    int alice,bob;
    cin>>w>>x>>y>>z;
    alice=w/x;
    bob=y/z;
    if(alice>bob){
        cout<<"Alice"<<endl;
    }else if(bob>alice){
        cout<<"Bob"<<endl;
    }else if(bob==alice){
        cout<<"Equal"<<endl;
    }
}


return 0;
}