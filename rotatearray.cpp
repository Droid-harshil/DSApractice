#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector <int>arr , int n , int k)
{
    vector<int>temp(arr.size());
    for(int i=0;i<arr.size();i++)
    {
        temp[(i+k)%n]=arr[i];
    }
        
        return temp;;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"enter no by which ou want to rotate the array"<<endl;
    int k;
    cin>>k;
    vector<int>ans=rotate(v,5,k);
    cout<<"array after rotation"<<endl;
     for(int i=0;i<ans.size();i++)
    {
                    cout<<ans[i]<<" ";
    }
    
}