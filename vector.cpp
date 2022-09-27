#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int> v;

v.push_back(5);
v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(66);
v.push_back(984);
v.pop_back();
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
vector<char> s(10,'h');

cout<<s.size()<<endl;

for(int i=0;i<s.size();i++){
    cout<<s[i];
}

sort(v.begin(),v.end());
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}


return 0;
}
