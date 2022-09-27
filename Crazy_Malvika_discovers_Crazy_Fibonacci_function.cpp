#include <bits/stdc++.h>
using namespace std;
int fib(int a,int b,int n){
     
     
     if(n==1){
        return a;
     }
     if(n==2){
        return b;
     }

     
     return fib(a,b,n-1)+fib(a,b,n+1);
     


}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int anss=fib(10,17,3);
cout<<anss%(10^9+7);

return 0;
}