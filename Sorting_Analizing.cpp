#include<bits/stdc++.h>
#include "Arman_Sorting.h"
int main()
{
    int n;
    cout<<"Insert the size of an Array: ";
    cin>>n;
    int a[n];
    cout<<"Insert the Array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int bcost=bubble_sort(a,n);
    int icost=insertion_sort(a,n);
    int scost=selection_sort(a,n);
    if(bcost<icost and bcost<scost)
        cout<<"Bubble Sort is better to sort the array\n";
    else if(icost<bcost and icost<scost)
        cout<<"Insertion sort is better to sort the array\n";
    else if(scost<bcost and scost<icost)
        cout<<"Selection sort is better to sort the array\n";
    else if(bcost==scost and scost==icost)
        cout<<"Any sorting is sutable for this\n";
    else if(bcost==scost and icost<bcost)
        cout<<"Insertion sort is better to sort the array\n";
    return 0;
}