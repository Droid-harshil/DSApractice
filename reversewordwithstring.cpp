#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s1;
    string s="my name is harshil";
    int i=0;
    while(i<s.length()){
    while(i<s.length()&&s[i]==' ')
    {
        i++;
    }
    int j=i+1;
    while(j<s.length()&&s[j]!=' ')
    {
        j++;
    }
     string temp=s.substr(i,j-i);
     s1.push(temp);
     i=j+1;
    }
    while(!s1.empty()){
      cout<<s1.top()<<" ";
      s1.pop();
    
    }
    
}