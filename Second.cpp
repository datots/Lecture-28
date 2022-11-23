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
    int m;
    
    m = 29;
    
    int *ab = &m;
    cout<<"Address: "<<ab<<" Value: "<<*ab;   
    *ab=34;
    cout<<"\n New address: "<<ab<<" New value: "<<*ab;
    *ab=7;
    cout<<"\n New address: "<<ab<<" New value: "<<*ab;
    
    
    return 0;
}