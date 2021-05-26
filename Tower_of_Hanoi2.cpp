#include<bits/stdc++.h>
using namespace std;
//MD Al Arman Sorker - 200101059
static int c;
void move(int n,char A,char B,char C)
{
    static int m=n;
    
    if(n>1)
    move(n-1,A,C,B);
    if(n<m or n>m)
    {
        int am=abs(n-m);
        for(int i=0;i<am;i++)
        {
            cout<<"              ";
        }
    }
    cout<<"move("<<n<<','<<A<<','<<B<<','<<C<<")";
    cout<<" "<<A<<"->"<<C<<endl;
    c++;
    if(n>1)
    move(n-1,B,A,C);
}
void move(int n)
{
    move(n,'A','B','C');
}
int main()
{
    int n;
    cin>>n;
    move(n);
    cout<<"Best :"<<c<<endl;
    return 0;
}