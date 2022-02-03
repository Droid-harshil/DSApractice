#include<iostream>
#include<ctype.h>
using namespace std;
char tolower(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else{
    char temp=ch-'A'+'a';
     return temp;
    }

}
bool ispalandroim(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
         if(!isalnum(a[s]))
          s++;
                else if(!isalnum(a[e])) 
                e--;
       else if(tolower(a[s])!=tolower(a[e]))
        return 0;
        
        else{
            
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char ch[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(ch[s++],ch[e--]);
    }
}
void reverse(string r)
{
    int s=0;
    int e=r.length()-1;
    while(s<e)
    {
        swap(r[s++],r[e--]);
    }
    
}
int getlenght(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count ++;
    }
    return count;
}
int main()
{
string s="the sky is blue";
reverse(s);

    // char ch[20];
    // cout<<"enter array elements"<<endl;
    // cin>>ch;
    // // ch[2]='\0';//stopes execution whaen null char arrivs
    // cout<<"string is"<<endl;
    // cout<<ch<<endl;
    // int len=getlenght(ch);
    // //cout<<"lenght of char arrau is"<<getlenght(ch);
    // reverse(ch,getlenght(ch));
    // cout<<"after reverse"<<endl;
    // cout<<ch<<endl;
    // cout<<"1 for yes 0 for no = "<<ispalandroim(ch,len);
    // cout<<endl;
    //  char t=tolower('W');
    // cout<<t;
}
