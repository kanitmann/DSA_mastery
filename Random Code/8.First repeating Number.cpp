#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag = 0;
    int arr[n];
    for(int i=0 ; i < n ; i++)
        cin>>arr[i];

    for(int i = 0; i < n; i ++)
    {
        if(flag==1)
        {
            break;
        }
        else{
            for(int j = 0 ; j < n ; j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    cout<<"Repeating element is: "<<arr[j]<<endl;
                    flag = 1;
                }
            } 
        }
    }
    return 0;
}