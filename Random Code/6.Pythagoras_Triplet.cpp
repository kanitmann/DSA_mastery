#include<iostream>
#include<math.h>

using namespace std;

int triplet(int a, int b, int c)
{
    int y,z;
    int x = max(a, max(b,c));
    if(x == a)
    {
        y = b;
        z = c;
    }
    else if(x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = b;
        z = a;
    }
    if(z*z + y*y == x*x)
        cout<<"It is a Pythagorean Triplet";
    else
        cout<<"It is not a pythagorean Triplet";
    return 0;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    triplet(a, b, c);
    return 0;
}