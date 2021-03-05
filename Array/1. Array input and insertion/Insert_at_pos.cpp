#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    
    int pos, n, element;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\n\n>>>You entered the array: ";
    for(int i = 0; i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nEnter position at which you want to insert a number: ";
    cin>>pos;
    pos = pos -1;
    if (pos>n)
        cout<<"\nArray size smaller than input pos. Error. Saving and exiting";
    else{
        cout<<"\nEnter element to insert: ";
        cin>>element;
        int arr2[n+1];
        for(int i=0;i<pos;i++)
            arr2[i] = arr[i];
        arr2[pos] = element;
        for(int i = pos;i<n;i++)
            arr2[i+1] = arr[i];
        cout<<"\n>>Final array: ";
        for(int i = 0; i<n+1;i++)
            cout<<arr2[i]<<" ";
    }
    return 0;
}
