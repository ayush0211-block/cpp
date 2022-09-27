#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){

    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> m;
int n;cin>>n;
for (int i = 0; i <n ; i++)
{
    int s;
    cin>>s;
    m.push_back(s);
}

vector<int> ans=reverse(m);

print(ans);

return 0;
}