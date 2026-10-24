#include<stdio.h>
int main()
{
    int x; 
    printf("%ld", sizeof(x)); // output 4

    int arr[10];
    printf("%ld", sizeof(arr)); // output 40
    return 0;
}