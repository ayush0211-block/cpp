#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> str={1,2,3,4,5,8,9,5};
vector<int> even;
vector<int> odd;

for (int i = 0; i < str.size(); i++)
{
   if(str[i]%2==0){
    even.push_back(str[i]);
   }
   else
   odd.push_back(str[i]);
}

cout<<even<<endl;

cout<<odd<<endl;








return 0;
}