#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int *a,int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            c++;
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    cout<<"Bubble Sorted Array\n";
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
    cout<<"Array Size: ";
    cin>>n;
    int a[n];
    cout<<"Array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int bcost=bubble_sort(a,n);
    cout<<bcost<<endl;
        

}