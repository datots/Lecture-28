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
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    
    cout<<&m;
    cout<<'\n'<<&fx;
    cout<<'\n'<<&cht;
    
    int *ptr1 = &m;
    float *ptr2 = &fx;
    char *ptr3 = &cht;
    
    cout<<'\n'<<*ptr1;
    cout<<'\n'<<*ptr2;
    cout<<'\n'<<*ptr3;
    
    cout<<'\n'<<ptr1;
    cout<<'\n'<<ptr2;
    cout<<'\n'<<ptr3;
    return 0;
}