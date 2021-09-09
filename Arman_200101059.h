#include<bits/stdc++.h>
using namespace std;
class Stack
{
    vector<char>s;
    public:
    void Push(char a)
    {
        s.push_back(a);
    }
    void Pop()
    {
        s.pop_back();
    }
    char Peek()
    {
        return *(s.end()-1);
    }
    int Isempty()
    {
        if(s.begin()==s.end()) 
            return 1;
        else 
            return 0;
    }
};
class Queue
{
    vector<char>a;
    public:
    void Enqueue(char c)
    {
        a.push_back(c);
    }
    int Isempty()
    {
        if(a.begin()==a.end()) 
            return 1;
        else 
            return 0;
    }
    void Dequeue()
    {
        if(Isempty()==1)
            cout<<"Queue is empty\n";
        else
            a.erase(a.begin());
    }
    char Peek()
    {
        return *a.begin();
    }
};