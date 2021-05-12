#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    getch();
    return 0;
}