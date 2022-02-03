#include<iostream>
using namespace std;
void reversearr(int arr[],int size)
{
    int s=0;
    int e=size-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}
int main()
{
    int arr[50];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    reversearr(arr,n);
    cout<<"array after reverse"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}