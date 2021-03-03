#include<iostream>

#define MAX_SIZE 5
int sort(int arr[MAX_SIZE], int key)
{
    int pos = 0;
    for(int i=0;i<MAX_SIZE;i++)
    {
        if(arr[i]==key)
        return(i);
    }
    return (-1);
}
int main()
{
    int list[MAX_SIZE];
    int ele;
    std::cout<<"Enter Array: ";
    for(int i = 0; i<MAX_SIZE;i++){
        std::cin>>list[i];
    }
    std::cout<<"\n\nEnter element to search: ";
    std::cin>>ele;
    int pos = sort(list,ele);
    if (pos==-1)
    std::cout<<"\nElement not found.";
    else
    std::cout<<"\nElement found at position "<<pos+1;
    return 0;
}