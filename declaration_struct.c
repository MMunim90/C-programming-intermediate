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
    s2 = (struct student){22, 10, "Batman Jokerson"};


    struct student s3 = {.grade = 10, .age = 20, .name = "Hati Jokerman"};

    
    printf("Student: %s, %d, %d\n", s1.name, s1.grade, s1.age);
    printf("Student: %s, %d, %d\n", s2.name, s2.grade, s2.age);
    printf("Student: %s, %d, %d\n", s3.name, s3.grade, s3.age);
    return 0;
}