#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m)
{          int i=n-1;
           int j=m-1;
           int k=(m+n-1);
          while(i>=0&& j>=0)
          {
               if(arr1[i]>arr2[j]){

               arr1[k]=arr1[i];
               k--;
               i--;
               }
               else {
               arr1[k]=arr2[j];
               k--;
               j--;
               }
          }
          while(i>=0)
          {
              arr1[k]=arr1[i];
              k--;
              i--;
          }
           while(j>=0)
          {
              arr1[k]=arr2[j];
              k--;
              j--;
          }
}
void print(int ans[],int n)
{
    for(int i=0;i<n;i++)
   {
       cout<<ans[i]<<" ";
   }
}
int main()
{
   int  arr1[6]={1,2,3,0,0,0};
   int  arr2[3]={4,5,6};
   
   merge(arr1,3,arr2,3);//send size of arr1 as 3 because only 3 elements are there in arr1 else are 0
   cout<<" mergerd array is"<<endl;
   print(arr1,6);
}