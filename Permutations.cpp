#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;



if(n==1){
    cout<<"1"<<endl;
 }

else if(n<4){
    cout<<"NO SOLUTION";

}
else{
ll even=2;
ll odd=1;
while (even<=n)
{
    cout<<even<<" ";
    even=even+2;
}
while (odd<=n)
{
    cout<<odd<<" ";
    odd=odd+2;
}

}




return 0;
}