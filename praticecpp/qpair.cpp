#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<pair<string,int>> m;
m={{"ayush",98},{"vasav",95},{"gaurav",74}};


sort(m.begin(),m.end());

for (int i = 0; i <m.size(); i++)
{
    cout<<m[i].first<<" "<<m[i].second<<endl;
}






return 0;
}