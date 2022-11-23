/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <conio.h>
using namespace std;


void findFactorial(int, int *);
int main()
{
    int i,fact,num;
    cout<<"Enter a number: \n";
    cin>>num;
    findFactorial(num,&fact);
    cout<<"Factoria of: "<<num<<" is: "<<fact;
    getch();

    return 0;
}

void findFactorial(int num,int *fact){
    int i;
    
    *fact = 1;
    
    for(i=1;i<=num;i++){
        *fact=*fact*i;
    }
}