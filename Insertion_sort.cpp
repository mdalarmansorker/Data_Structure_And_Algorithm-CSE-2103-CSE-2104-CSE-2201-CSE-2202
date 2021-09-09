#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int *a,int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        c++;
        int j=i-1;
        while(j>=0 and a[j]>key)
        {
            a[j+1]=a[j];
            c++;
            j=j-1;
        }
        a[j+1]=key;
        c++;
    }
    cout<<"Shorted list by Insertion Sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
    return c;
}
int main()
{
    int n;
    cout<<"Insrt Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Insert the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int incost=insertion_sort(a,n);
    cout<<incost<<endl;
    return 0;
}