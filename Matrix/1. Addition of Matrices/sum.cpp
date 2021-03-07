#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter number of rows: ";
    cin>> row;
    cout<<"\nEnter number of cols: ";
    cin>>col;
    
    cout<<"\n\nEnter matrix 1 elements: ";
    int A[row][col], B[row][col];
    for(int i = 0 ; i < row; i++ )
    {
        for(int j=0; j< col; j++)
            cin>>A[i][j];
    }
    cout<<"\n\nA: \n";
    for(int i = 0 ; i < row; i++ )
    {
        for(int j=0; j< col; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }  
    cout<<"\n\nEnter matrix 2 elements: ";
    for(int i = 0 ; i < row; i++ )
    {
        for(int j=0; j< col; j++)
            cin>>B[i][j];
    }
    cout<<"\n\nB: \n";
    for(int i = 0 ; i < row; i++ )
    {
        for(int j=0; j< col; j++)
            cout<<B[i][j]<<" ";
        cout<<endl;
    }
    
    cout<<"\n\nA + B: \n";
    for(int i = 0 ; i < row; i++ )
    {
        for(int j=0; j< col; j++)
            cout<<A[i][j] + B[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
