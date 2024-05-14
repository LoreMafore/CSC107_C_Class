/*****************************************************************************
*  Write an application whole input is a character and a string, and whose 
*  output indicates the number of times the character appears in the string.  
*  The output should include the input character and use the plural form, n’s, 
*  if the number of times the characters appears is not exactly 1.  You may 
*  assume that the sting does not contain spaces and will always contain less 
*  than 50 characters.
*
*  Example
*  Input the String to Search  : Today is Monday
*  Input the character to Count: a
*
*  The String “Today is Monday” has 2 a’s
*
******************************************************************************/

#include <stdio.h>
#include <string.h>

void counter( void )
{
    //initializing variables
    int count = 0;
    char a[50];

    printf("Write a sentence under 50 characters: ");
    //asks for an input of a string
    fgets(a, sizeof(a), stdin);

    //length of a string
    int length = strlen(a);

    //desired character you are looking for
    char letter;
    printf("What letter are you looking for? ");
    scanf("%c", &letter);

    int total = 0;

    // looks through the length of the string counts the times a desirable character appears
    while(count <= length)
    {
        printf("%c", a[count]);
        count++;

        if( a[count] == letter)
        {
            total++;

        }


    }

    // determining whether it is multiple variables or just one
    if(total > 1 || total < 1)
    {
        printf("\nThe total amount of characters of %c are: %d",letter,total);
    }

    else if (total < 2 && total > 0)
    {
        printf("\nThere was only one letter %c",letter);
    }


}
