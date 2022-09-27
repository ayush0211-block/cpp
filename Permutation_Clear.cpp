#include <bits/stdc++.h>
using namespace std;

void summ(int i,int sum){
     
     if(i<1){
        cout<<sum;
        return;
     
     }
     summ(i-1,sum+i);
 


}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

summ(5,0);

return 0;
}