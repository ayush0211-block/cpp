#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
      
      if(b==0){
      
      return a;
         
      }
      
      return gcd(b,a%b);



}


int main()
{


ios_base::sync_with_stdio(false);
cin.tie(NULL);


cout<<gcd(49,7);
return 0;
}