/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    char str[20], *pt;
    int i = 0;
    
    
   cout << "Pointer Example C++ Program : Calculate Length of String \n";

   cout << "Enter Any string [below 20 chars] : ";
   cin>>str;
   
   pt = str;
   while(*pt != '\0'){
       i++;
       pt++;
   }
   cout << "\nLength of String : " << i;

   getch();

    return 0;
}