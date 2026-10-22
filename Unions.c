#include<stdio.h>

union val
{
    int int_num;
    float fl_num;
    char str[20];
};


int main()
{
    union val test;
    test.int_num = 42;
    printf("%d", test.int_num);


    union val u1;
    union val u2;

    u1.int_num = 43;
    u2 = u1;

    printf("\n%d", u2.int_num);

    return 0;
}