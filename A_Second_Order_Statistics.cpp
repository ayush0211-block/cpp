#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

set<int> freq;

int n;
cin>>n;

for(int i=0;i<n;i++){
    int s;
    cin>>s;
    freq.insert(s);
}

if(freq.size()>1){
set<int>:: iterator ptr=freq.begin();
   cout<< *(++ptr);
}
else{
    cout<<"NO";
}

return 0;
}
