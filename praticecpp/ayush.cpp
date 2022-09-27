#include <bits/stdc++.h>
using namespace std;
int cont=0;

void fuction(){
     
     if(cont==3){
        return;
     }
     cout<<cont<<endl;
      cont++;
     fuction();
    


}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

fuction();
return 0;
}