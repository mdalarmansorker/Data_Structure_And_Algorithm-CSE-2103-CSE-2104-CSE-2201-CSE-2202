#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of Array: ";
    cin>>n;
    int a[n];
    cout<<"Enter an sorted array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element you want to search: ";
    int search;
    cin>>search;
    int position=-1;
    int first=0;
    int last=n-1;
    while(last>=first)
    {
        int middle=(first+last)/2;
        if(a[middle]==search)
        {
            position=middle+1;
            break;
        }
        else if(a[middle]<search)
        {
            first=middle+1;
        }
        else
        {
            last=middle-1;
        }
    }
    if(position==-1)
        cout<<"Not found\n";
    else
        cout<<"Element found in "<<position<<" Position\n";
    return 0;
}