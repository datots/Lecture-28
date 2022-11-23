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
    int m = 10;
    int n,o;
    
    int *z=&m;
    cout<<&z<<endl;
    cout<<*z<<endl;
    cout<<&n<<endl;
    cout<<&o<<endl;
    return 0;
}