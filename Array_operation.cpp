#include<bits/stdc++.h>
using namespace std;
void traverse(int *a,int &n)
{
    cout<<"Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void insert_middle(int *a, int &n, int position, int element)
{
    int index = position - 1;
    n++;
    for(int i=n-1;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[index] = element;
}
void insert_first(int *a,int &n)
{
    int element;
    cout<<"Insert new element to add on first: ";
    cin>>element;
    insert_middle(a,n,1,element);
    cout<<"Inserting in first position successfull\n";
}
void insert_last(int *a,int &n)
{
    int element;
    cout<<"Insert new element to add on last: ";
    cin>>element;
    n++;
    a[n-1]=element;
    cout<<"Inserting in last position successfull\n";
}
void update(int *a,int position, int element)
{
    a[position-1]=element;
    cout<<"Updating element complete";
}
int search(int *a,int &n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
            return i;
    }
    return -1;
}
void delete_last(int *a, int &n)
{
    a[n-1] = '\0';
    n--;
    cout<<"Last element deleted\n";
}
void delete_first(int *a, int &n)
{
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]='\0';
    n--;
    cout<<"First element deleted\n";
}
void delete_middle(int *a, int &n, int position)
{
    for(int i=position-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]='\0';
    n--;
    cout<<"Element deleted\n";
}

int main()
{
    int arr[100000];
    int n;
    cout<<"Insert array size: ";
    cin>>n;
    cout<<"Insert the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i]; 
    delete_first(arr,n);
    traverse(arr,n);
    // cout<<"Searching element: ";
    // int e;
    // cin>>e;
    // int index = search(arr,n,e);
    // if(index != -1)
    //     cout<<"Found. Position = "<<index+1<<endl;
    // else
    //     cout<<"Not found"<<endl;
    // traverse(arr,n);
    // insert_first(arr,n);
    // traverse(arr,n);
    // insert_last(arr,n);
    // traverse(arr,n);
    // insert_middle(arr,n,3,59);
    // traverse(arr,n);
    
    return 0;
}