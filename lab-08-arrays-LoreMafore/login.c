/******************************************************************************
* Write a program that creates a login name for a user, given the user's first
* name, last name, and a four-digit integer as input.  Output the login name,
* which is made up of the first four letters of the last name, followed by the
* first two letters of the first name, and then the last two digits of the
* number (use the % operator). If the last name has less than four letters,
* then use all letters of the last name.  Assume the first name and last name
* have a maximum of 50 characters.  The size of the array should be sized by
* defining a constant called MAX_LENGTH.
*
* Hint: Make a new string, copy the characters from the first and last names
* into the new string, and output the new string as part of the output.
*
* Don't forget to add a null character at the end of the new string after you
* have finished copying the characters.
*
* Example 1
* Enter User First Name: Michael
* Enter User Last Name : Jordan
* Enter 4-digit PIN    : 1991
*
* Your login name      : JordMi91
*
* Example 2
* Enter User First Name: M
* Enter User Last Name : Jrd
* Enter 4-digit PIN    : 1991
*
* Your login name      : JrdM91
******************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 51

int main( void )
{
    //Initalizing variables
    char firstName[MAX_LENGTH] = "";
    char lastName[MAX_LENGTH] = "";
    char pin[5] = "";
    char login[9] = "";           
    int lengthFirst = 0;
    int lengthLast = 0;

    //Asking and receiving input
    printf("Enter User First Name: ");
    scanf("%s", &firstName);
    printf("\bEnter User Last Name : ");
    scanf("%s", &lastName);
    printf("\bEnter 4-digit PIN    : ");
    scanf("%s", &pin);

    lengthFirst = strlen(firstName);
    lengthLast = strlen(lastName);

    //Keeps the last name to four characters
    if(lengthLast > 4)
    {
        lengthLast = 4;
    }

    //Keeps the first name to 2 characters
    if(lengthFirst > 2)
    {
        lengthFirst = 2;
    }

    //reads in the first 4 characters of the last name and assigns them to the array
    for(int i = 0; i < lengthLast &&lastName[i] != '\0'; i++)
    {
         login[i] = lastName[i];
    }

    //reads in the first 2 characters of the first name and assigns them to the array after the last name
    for(int i = 0; i < lengthFirst && lastName[i] != '\0'; i++)
    {
        login[i + lengthLast] = firstName[i];
    }

    //reads the last two integers of the pin and assigns them to the last two spots of the array

    for (int i = 0; i < 4 && pin[i] != '\0'; i++)
    {
        login[i + lengthLast+lengthFirst] = pin[i+2];
    }

    login[8] = '\0';

    printf("\n%s",login);



    return 0;
}