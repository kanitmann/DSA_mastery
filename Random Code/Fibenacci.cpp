#include<iostream>

using namespace std;

int fibenacci(int a2)
{
    int b2 = 1;
    int fib = a2 + b2;
    return fib;
}

int main()
{
    int n=5;
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        int b = fibenacci(a);
        cout<<a<<" ";
        a = b;
    }
    return 0;
}