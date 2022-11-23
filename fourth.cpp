/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   
    int *ptr1, *ptr2;
    int num1,num2;
    int result;
    
    cout<<"Enter first number: ";
    cin >>num1;
    cout<<"Enter second number: ";
    cin >> num2;
    ptr1 = &num1;
    ptr2 = &num2;
    
    result = *ptr1+*ptr2;
    
    cout<<result;

    return 0;
}