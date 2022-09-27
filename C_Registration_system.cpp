#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

map<string,int> fre;

int n;
cin>>n;

for(int i=0;i<n;i++){
    string s;
    cin>>s;

    if(fre[s]==0){
        cout<<"OK"<<endl;
    }else{
        cout<<s<<fre[s]<<endl;
    }

fre[s]++;

   
    
}
return 0;
}