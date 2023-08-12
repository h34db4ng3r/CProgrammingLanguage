#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favNum = 90;
    char myChar = 'i';


    // it's a function, performs a task
    printf("Hello\" World!\n");

    // format specifier
    printf("my favorite %s is %d\n", "number", 500);
    printf("my favorite %s is %f\n", "number", 500.98754);
    printf("my favorite %s is %d\n", "number", favNum);
    printf("my favorite %c is %d\n", myChar, 500);


    printf("\n");
    return 0;
}