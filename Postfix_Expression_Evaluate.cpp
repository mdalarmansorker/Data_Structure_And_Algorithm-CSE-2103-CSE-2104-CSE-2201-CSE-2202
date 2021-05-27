#include<bits/stdc++.h>
using namespace std;
//MD AL ARMAN SORKER - 200101059
int main()
{
    string p;
    cin>>p;
    stack<int>am;
    vector<int>amt;
    int result;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]>='0' and p[i]<='9')
        {
            int temp=p[i]-'0';
            am.push(temp);
            amt.push_back(temp);
        }
        else
        {
            int a1=am.top();
            am.pop();
            amt.pop_back();
            amt.pop_back();
            int a2=am.top();
            am.pop();
            if(p[i]=='+')
                result=a1+a2;
            else if(p[i]=='-')
                result=a2-a1;
            else if(p[i]=='*')
                result=a1*a2;
            else if(p[i]=='/')
                result=a2/a1;
            else
                result=pow(a2,a1);
            am.push(result);
            amt.push_back(result);
        }
        cout<<"Step "<<i+1<<": Stack: ";
        for(auto j:amt)
            cout<<j<<' ';
        cout<<endl;
    }
    cout<<"Result: "<<result<<endl;
    return 0;
}