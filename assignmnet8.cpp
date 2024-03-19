// Q1. Write a user defined function factorial() that calculates factorial of given number and it throws
// exception if number entered by user is negative.

#include <iostream>
using namespace std;

void fact(int num1)
{

    if (num1 < 0)
    {
        throw 2;
    }
    for (int i = 1; i <= num1; i++)
    {
        int fact = fact * i;
    }
    cout << "factorial is" << fact;
    
}

int main()
{
    int num1;
    cout << "Enter the number";
    cin >> num1;

    try
    {
        fact(num1);
    }
    catch (int error)
    {
        cout << "No negative number calculate";
    }
}
