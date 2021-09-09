#include<bits/stdc++.h>
using namespace std;
//MD Al ARMAN SORKER - 200101059
int main()
{
        string temp;
        cin>>temp;
        temp+=')';
        string a="";
        vector<char>amt;
        int co=0;
        stack<char>am;
        am.push('(');
        amt.push_back('(');
        co++;
        cout<<co<<": Stack: "<<'('<<endl;
        cout<<"Expression: "<<endl;
        cout<<"Description: Start"<<endl;
        int i=0;
        int j=0;
        for(i=0;i<temp.length();i++)
        {
            if((temp[i]>='A' and temp[i]<'Z') or (temp[i]>='a' and temp[i]<='z') or (temp[i]>='0' and temp[i]<='9'))
            {
                a+=temp[i];
            }
            else if(temp[i]=='(')
            {
                am.push(temp[i]);
                amt.push_back(temp[i]);
            }
                
            else if(temp[i]=='+' or temp[i]=='-' or temp[i]=='*' or temp[i]=='/' or temp[i]=='^')
            {
                while(!am.empty())
                {
                     if(am.top()=='^')
                    {
                        a+=am.top();
                        am.pop();
                        amt.pop_back();
                        if(am.top()==temp[i])
                            cout<<"Description: "<<"'^' is equal to '^"<<endl;
                        else
                            cout<<"Description: "<<"'^' is greater than "<<temp[i]<<endl;
                    }
                    else if((am.top()=='*' or am.top()=='/') and temp[i]!='^')
                    {
                        char t1=am.top();
                        char t2=temp[i];
                        a+=am.top();
                        am.pop();
                        amt.pop_back();
                        
                        /*if(t1==t2)
                            cout<<"Description: "<<"'"<<t1<<"' is equal to '"<<t1<<"'"<<endl;
                        else
                            cout<<"Description: "<<"'"<<t1<<"' is greater than '"<<t2<<"'"<<endl;*/
                    }
                    else if((am.top()=='+' or am.top()=='-') and temp[i]!='^' and temp[i]!='*' and temp[i]!='/')
                    {
                        /*if(am.top()==temp[i])
                            cout<<"Description: "<<"'"<<am.top()<<"' is equal to '"<<am.top()<<"'"<<endl;
                        else
                            cout<<"Description: "<<"'"<<am.top()<<"' is greater than '"<<temp[i]<<"'"<<endl;*/
                        a+=am.top();
                        am.pop();
                        amt.pop_back();
                    }
                    else
                    {
                        
                        am.push(temp[i]);
                        amt.push_back(temp[i]);
                        break;
                    }
                }
            }
            else if(temp[i]==')')
            {
                while(!am.empty() and am.top()!='(')
                {
                    a+=am.top();
                    am.pop();
                    amt.pop_back();
                }
                am.pop();
                amt.pop_back();
                
            }
            co++;
                    string s(amt.begin(),amt.end());
                    cout<<co<<": Stack: "<<s<<endl;
                    cout<<"Expression: "<<a<<endl;
        }
        cout<<"Description: End"<<endl;
       std::cout<<"Postfix Notation: "<<a<<endl;
    return 0;
}