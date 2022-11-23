/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std ;

int main()
{
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    int sum;
    cout<<"Enter first number: ";
    cin >> num1;
    cout<<"Enter second number: ";
    cin >> num2;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    sum = *ptr1 + *ptr2;
    
    cout<<"The sum is: "<<sum<<endl;
     return 0 ;
}