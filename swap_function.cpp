#include<bits/stdc++.h>
using namespace std;
void swap(int &n,int &m)
{
    int temp=n;
    n= m;
    m=temp;
}
int main()
{
    int a=55, b=59;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    char ch = 'x';
char *c1, *c2;
c1 = &ch;
c2 = c1; // Pointer Assignement Taking Place
printf (" *c1 = %c And *c2 = %c", *c1,*c2); // Prints 'x' twice
    return 0;
}
