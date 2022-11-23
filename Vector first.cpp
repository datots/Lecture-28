/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

bool consecutive(int arr[],int n){
    sort(arr,arr+n)
    for(int i = 1;i<n;i++){
        if(arr[i] != arr[i-1]+1){
            return false;
        }
    }
    return true;
}

int main()
{
   int arr[]= {5, 4, 2, 3, 1, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
    if(areConsecutive(arr, n) == true)
        cout<<" Array elements are consecutive ";
    else
        cout<<" Array elements are not consecutive "
    

    return 0;
}