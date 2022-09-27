#include <bits/stdc++.h>
using namespace std;


bool checkpalendrome(string str , int i,int j ){

if(i>j){
    return true;
}
if(str[i]!=str[j]){
    return false;
}
else{

    return checkpalendrome(str,i+1,j-1);

}


}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string name="vasav";

bool ispalendrome=checkpalendrome(name,0,name.length()-1);

if(ispalendrome){
    cout<<"THE GIVEN STRING IS PALENDROME";
}else{
    cout<<" FUCK OFF";
}







return 0;
}