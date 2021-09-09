#include<bits/stdc++.h>
#include "Arman_200101059.h"     //My Headerfile
//Making Queue by Own Stack from own import Headerfile
class Queue2
{
    Stack a,b;
    public:
    void enQueue(char t)
    {
        //push everything from stack a to b
        while(!a.Isempty())
        {
            b.Push(a.Peek());
            a.Pop();
        }
        a.Push(t);
        //push everything from stack b to a
        while(!b.Isempty())
        {
            a.Push(b.Peek());
            b.Pop();
        }
    }
    void deQueue()
    {
        if(a.Isempty())
        {
            cout<<"Queue is empty\n";
            return;
        }
        else 
        a.Pop();
    }
    char PeeK()
    {
        return a.Peek();
    }
    int isEmpty()
    {
        if(a.Isempty())
            return 1;
        else 
            return 0;
    }
};

using namespace std;
int main()
{
    Stack a;
    string b;
    cout<<"Insert String: ";
    cin>>b;
    cout<<"Reverse string by Stack: ";
    for(auto i:b)
        a.Push(i);
    string c="";
    while(a.Isempty()!=1)
    {
        c+=a.Peek();
        a.Pop();
    }
    cout<<c<<endl;
    cout<<"String copy by Queue: ";
    Queue cc;
    for(auto i:c)
        cc.Enqueue(i);
    string temp="";
    while(cc.Isempty()!=1)
    {
        temp+=cc.Peek();
        cc.Dequeue();
    }
    cout<<temp<<"(Copy String)"<<endl;
    return 0;
}