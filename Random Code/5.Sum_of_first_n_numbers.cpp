#include<iostream>

using namespace std;

int sum_of_n(int num)
{
    int s1 = 0;
    for(int i=0; i<=num ; i++)
        s1 += i;
    return s1;
}

int main()
{
    int n ;
    cin>>n;
    cout<<sum_of_n(n);
    return 0;
}