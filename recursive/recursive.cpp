//2f(x-1) +x^2

#include<iostream>
using namespace std;

int f(int x)
{
    if(x==0)
    return 0;
    else 
    return 2 * f(x-1) + x* x;
    
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of enetered number is: " << f(num);
    return 0;
}
