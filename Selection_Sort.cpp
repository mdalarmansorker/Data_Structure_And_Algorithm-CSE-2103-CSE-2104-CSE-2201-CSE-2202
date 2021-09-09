#include<bits/stdc++.h>
using namespace std;
void swap(int &n,int &m)
{
    int temp=n;
    n= m;
    m=temp;
}
int selection_sort(int *a,int n)
{
    int c=0;
    for(int j=0;j<n-1;j++)
    {
        int smallest = j;
        for(int i=j+1;i<n;i++)
        {
            c++;
            if(a[i]<a[smallest])
                smallest = i;
        }
        swap(a[j],a[smallest]);
    }
    cout<<"Selection Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<n-1)
            cout<<" ";
        else 
            cout<<endl;
    }
    return c;

}
int main()
{
    int n;
    cout<<"Insert Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Insert the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int scost=selection_sort(a,n);
    cout<<scost<<endl;
    return 0;
}