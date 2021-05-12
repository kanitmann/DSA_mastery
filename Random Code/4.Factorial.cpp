#include<iostream>

using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i = num; i > 0 ; i--)
    {
        fact *= i;
    }
    return fact;
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}