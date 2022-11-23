/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h> 
using namespace std ;
void swap(char *x,char *y){
        char temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    
void permute(char *a, int l, int r)  
{  
    int i;  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
       for (i = l; i <= r; i++)  
       {  
            swap((a+l), (a+i));  
            permute(a, l+1, r);  
            swap((a+l), (a+i)); //backtrack  
        }  
   } 
}  

int main()
{
         char str[] = "ABC";  
         int n = strlen(str);  
         permute(str, 0, n-1);  
         return 0 ;
}