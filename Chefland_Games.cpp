#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int ts;
cin>>ts;
while(ts--){
map<int,int> m;

int arr[4];

for(int i=0;i<4;i++){
   
   cin>>arr[i];
   m[arr[i]]++;
}
for(auto x:m){

     if(x.first==0&&x.second==4){
        cout<<"IN"<<endl;
     }else{
        cout<<"OUT"<<endl;
        break;
     }

}
}

return 0;
}