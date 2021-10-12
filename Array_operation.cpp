#include<bits/stdc++.h>
using namespace std;
void traverse(int* a,int n)
{
    cout<<"The Array is: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void insert_first(int item, int* a, int &n)
{
    int temp = a[0];
    a[0] = item;
    for(int i=1;i<n+1;i++)
    {
        int temp2 = a[i];
        a[i] = temp;
        temp = temp2;
    }
    n++;
    cout<<"Item inserted successfully\n";
}
void insert_last(int*a, int &n)
{
    int item;
    cout<<"Insert the item: ";
    cin>>item;
    a[n] = item;
    n++;
    cout<<"Inserted in the last successfully\n";
}
void insert_in_position(int item, int position,int* a, int &n)
{
    
    position--;
    int temp = a[position];
    n++;
    a[position] = item;
    for(int i=position+1;i<n;i++)
    {
        int temp2 = a[i];
        a[i] = temp;
        temp = temp2;
    }
    cout<<"Inserted in the position successsfully\n";
}
void update(int*a,int &n)
{
    int item, position;
    cout<<"Updating item position: ";
    cin>>position;
    position--;
    cout<<"Item: ";
    cin>>item;
    a[position] = item;
}
void delete_first(int *a,int &n)
{
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    cout<<"First Item deleted successfully\n";
}
void delete_position(int *a,int &n)
{
    int position;
    cout<<"Insert the item position to delete it: ";
    cin>>position;
    position--;
    for(int i=position;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1] = '\0';
    n--;
    cout<<"First Item deleted successfully\n";
}
void delete_last(int*a,int &n)
{
    a[n-1] = '\0';
    n--;
    cout<<"Last item deleted successfully\n";
}
int search(int item,int*a, int &n)
{
    int position = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i] == item)
        {
            position = i;
            break;
        }
    }
    
}
void insert_before_item(int* a, int &n)
{
    int item;
    cout<<"Insert the item to add before the position: ";
    cin>>item;
    int position = search(item, a, n);
    insert_in_position(item, position, a, n);
}
int main()
{
    int arr[100000];
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    traverse(arr,n);
    int item;
    cout<<"Item insert in the first: ";
    cin>>item;
    insert_first(item,arr,n);
    traverse(arr, n);
    insert_last(arr,n);
    traverse(arr,n);
    int item;
    int position;
    cout<<"Item: ";
    cin>>item;
    cout<<"Position: ";
    cin>>position;
    insert_in_position(item, position, arr, n);
    traverse(arr,n);
    update(arr, n);
    traverse(arr, n);
    delete_first(arr,n);
    traverse(arr, n);
    delete_position(arr,n);
    traverse(arr, n);
    delete_last(arr,n);
    traverse(arr, n);
    int item;
    cout<<"Search item: ";
    cin>>item;
    int position = search(item, arr, n);
    if(position == -1)
        cout<<"Item not found\n";
    else
        cout<<"Item's Index: "<<position<<endl;

    return 0;
}