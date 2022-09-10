#include <stdio.h>
#include <stdlib.h>

/**
*This program recieves and outputs texts
*and returns 0
*/

int main()
{

    char fullName[20];
    char userName[20];
    int age;

    printf("Enter your full name: ");
    fgets(fullName, 20, stdin);
    printf("Enter your nickname: ");
    scanf("%s", userName);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hi %s, your name is %s You are %d years old.", userName, fullName, age);
    return (0);
}
