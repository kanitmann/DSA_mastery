#include<iostream>
#include<math.h>
using namespace std;

int isprime(int x)
{
    int result = 1;
    for(int i=2; i <= sqrt(x); i++)
    {
        if(x%i==0)
        result = 0;
    }
    return result;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<b ; i++)
    {
        if(isprime(i)==1)
            cout<<i<<"\n";
    }

}