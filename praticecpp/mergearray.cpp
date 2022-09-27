#include <bits/stdc++.h>
using namespace std;

void mergearray(int arr1[],int arr2[],int n1,int n2,int arr3[] ){

        
      int i=0,j=0,k=0;

      while(i<n1){
        arr3[k++]=arr1[i++];
      }
      
      while(j<n2){
        arr3[k++]=arr2[j++];
      }

     sort(arr3,arr3+n1+n2);
    for (int i = 0; i < n1+n2; i++)
{
      cout<<arr3[i]<<" ";
}


}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int arr1[]={1,5,9,2};
int n1=sizeof(arr1)/sizeof(arr1[0]);

int arr2[]={54,98,2,0};
int n2=sizeof(arr2)/sizeof(arr2[0]);

int arr3[n1+n2];
mergearray(arr1,arr2,n1,n2,arr3);

/*for (int i = 0; i < n1+n2; i++)
{
      cout<<arr3[i]<<" ";
}*/


return 0;
}