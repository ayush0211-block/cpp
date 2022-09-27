#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){

 string c1;
 cin>>c1;
 string c2;
 cin>>c2;
 int count=0;
 
 for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
         
         if(c1[i]==c2[j]){
             count++;
         }
         
     }
 } if(count==2){
     cout<<"1"<<endl;
 }else if(count==3){
 cout<<"0"<<endl;}
 else if(count==0){
     cout<<"3"<<endl;
 }else if(count==1)
 cout<<"2"<<endl;
 
 
 
 
}

return 0;
}