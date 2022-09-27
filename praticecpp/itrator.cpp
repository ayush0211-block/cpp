#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> m={1,2,3,4,5};


vector<int>:: iterator ptr=m.begin();

cout<<*(ptr)<<endl;

for( ptr=m.begin();ptr<m.end();ptr++ ){
    
    cout<<*ptr<<" ";

}




return 0;
}