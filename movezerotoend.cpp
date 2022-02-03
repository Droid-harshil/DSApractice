#include<iostream>
using namespace std;
void move(int arr[],int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main()
{
    int arr[10]={0,2,0,3,12,0};
    move(arr,6);
    cout<<"array elements are "<<endl;
    for(int j=0;j<6;j++)
    {
  cout<<arr[j]<<" ";
    }
}