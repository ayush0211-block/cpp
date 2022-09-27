#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

set<int> s;
s.insert(3);
s.insert(1);
s.insert(-54);
s.insert(964);
s.insert(21);
s.erase(*s.begin());

s.insert(0);
cout<<*s.begin();

return 0;
}