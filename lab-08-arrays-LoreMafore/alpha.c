/******************************************************************************
* Write a program that removes all non-alpha characters from the given input.
* The size of the array should be sized by defining a constant called
* MAX_LENGTH, and should not exceed 50 characters.
*
* Enter an Input String   : -Hello, 1 World$!
* The entered alpha String: HelloWorld
******************************************************************************/
#include <stdio.h>

#define MAX_LENGTH 51

int main(void) {
    char alphaArray[MAX_LENGTH] = {""};
    char input[MAX_LENGTH] = {""};

    printf("Enter an Input String   :");
    fgets(input, MAX_LENGTH, stdin);


    int counter = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) {
            alphaArray[counter++] = input[i];
        }
    }
    alphaArray[counter] = '\0';

    printf("The entered alpha String: %s\n", alphaArray);

    return 0;
}


