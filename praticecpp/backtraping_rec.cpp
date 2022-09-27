
//BACKtraping

#include <bits/stdc++.h>
using namespace std;


void print(int i,int n){
    
   if(i<1){
    return;
   }

   print(i-1,n);
   cout<<i<<endl;



   

   

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

print(4,4);





return 0;
}