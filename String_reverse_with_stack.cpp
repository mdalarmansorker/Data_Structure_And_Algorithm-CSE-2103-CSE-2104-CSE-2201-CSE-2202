#include<bits/stdc++.h>
using namespace std;
//MD AL ARMAN SORKER - 200101059
int main()
{
    stack<char>am;
    string a;
    cin>>a;
    int l=a.length();
    for(int i=0;i<l;i++)
        am.push(a[i]);
    string m="";
    for(int i=0;i<l;i++)
    {
        m=m+am.top();
        am.pop();
    }
    cout<<m<<endl;
}