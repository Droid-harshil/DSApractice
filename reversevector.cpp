#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
int s=0;
int e=v.size()-1;
while(s<=e)
{
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}
int main()
{
    vector<int>v;
    v.push_back(11);
    v.push_back(4);
    v.push_back(14);
    v.push_back(1);
    v.push_back(4);
    v.push_back(77);
    cout<<"before reverse"<<endl;
    for(int i:v)
    cout<<i<<" ";
    vector<int> ans=reverse(v);
    cout<<"after reverse"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }


}