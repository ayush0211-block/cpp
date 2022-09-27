#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int sum;
    int s1=0;
    int s2=0;
    int s3=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        s1=s1+x;
        s2=s2+y;
        s3=s3+z;
        }
  if(s1==0&&s2==0&&s3==0){
      cout<<"YES";
  }else{
      cout<<"NO";
  }
    return 0;
}