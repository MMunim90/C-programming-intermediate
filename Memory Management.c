#include<stdio.h>
int main()
{
    int x; 
    printf("%ld\n", sizeof(x)); // output 4

    int arr[10];
    printf("%ld\n", sizeof(arr)); // output 40
    return 0;
}