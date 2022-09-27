#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int ts;
cin>>ts;
while(ts--){
    int x,y,z;
    cin>>x>>y>>z;

    if(x>y&&x>z){
        cout<<"A"<<endl;
    }
    else if(y>x&&y>z){
        cout<<"B"<<endl;
    }
    else if(z>x&&z>y){
        cout<<"z"<<endl;
    }else if(x==y){
        cout<<"NOTA"<<endl;
    }
    else if(y==z){
        cout<<"NOTA"<<endl;
    }
    else if(z==x){
        cout<<"NOTA"<<endl;
    }
     
    
}

return 0;
}