#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


int t;
cin>>t;
while(t--){

int x,y;
cin>>x>>y;

if(x<y){
    cout<<"REPAIR"<<endl;
}
else if(x>y){
    cout<<"NEW PHONE"<<endl;
}
else{
    cout<<"ANY"<<endl;
}

}
return 0;
}