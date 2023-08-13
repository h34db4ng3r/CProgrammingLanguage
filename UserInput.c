#include <stdio.h>
#include <stdlib.h>

int main()

{
    char name[20];
    printf("Enter your name: \n");
    fgets(name, 20, stdin);
    printf("Your name is %s asdfs\n", name);

/*
    char grade;
    printf("Enter your grade: \n");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);


    char name[20];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Your nae is %s\n", name);


    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);


    double gpa;
    printf("Enter your gpa: \n");
    // scanf uses %lf to look for double
    scanf("%lf", &gpa);
    // while print f uses %f
    printf("Your gpa is %f\n", gpa);

*/

    

    return 0;
}