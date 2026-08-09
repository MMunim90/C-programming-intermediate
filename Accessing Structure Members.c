#include<stdio.h>

struct student{
    int age;
    int grade;
    char name[40];
};

int main()
{
    struct student s1 = {19, 9, "John Birghimer"};

    struct student s2;
    
    printf("Assigning, s2 = s1\n");
    s2 = s1;
    
    printf("Student: %s, %d, %d\n", s1.name, s1.grade, s1.age);
    printf("Student: %s, %d, %d\n", s2.name, s2.grade, s2.age);
    return 0;
}