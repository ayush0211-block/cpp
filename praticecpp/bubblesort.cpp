#include <bits/stdc++.h>
using namespace std;

void bubble(int *arr,int n){
     
     if(n==0||n==1){
        return ;
     } 
    

    for (int i = 0; i <n-1; i++){
        if(arr[i]>arr[i+1]){
            
            swap(arr[i],arr[i+1]);
}
}

bubble(arr,n-1);

    



}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int arr[5]={5,1,9,3,7};

bubble(arr,5);


for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}




return 0;
}