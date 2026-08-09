#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    char title[40];
    float hours;
} course;

int main()
{
    course cs1;
    course cs2;
    
    cs1.id = 341279;
    strcpy(cs1.title, "Intro to C++");
    cs1.hours = 12.5;

    cs2.id = 341281;
    strcpy(cs2.title, "Advanced C++");
    cs2.hours = 14.25;
    
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);
    return 0;
}