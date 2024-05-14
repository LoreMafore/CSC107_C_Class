/*****************************************************************************
* Write a C program called ‘student, which prompts the user for a students first name (string), last name (string) and identification number (integer).  These inputs will be passed to a function called print_student(), which will print out the values in a formatted output.  

* The program will read up to three students maximum.  

* Example
* Enter Students First Name: Cornelius
* Enter Students Last  Name: Ryan
* Enter Students ID        : 3920485
* >> Cornelius       Ryan           : 3920485
*
* Enter Students First Name: Sandra
* Enter Students Last  Name: Wilson
* Enter Students ID        : 10364
* >> Sandra          Wilson         : 10364
*
* Enter Students First Name: Grant
* Enter Students Last  Name: Adams
* Enter Students ID        : 8329284
* >> Grant           Adams          : 8329284

******************************************************************************/
#include <stdio.h>
#include <string.h>

void print_student(char* firstName, char* lastName, int studentID)
{
    printf(">%s       %s          :%d",firstName,lastName,studentID);
}

int main()
{
    char firstName[20];
    char lastName[20];
    int studentID = 0;

    puts("Enter Students First Name: ");
    fgets(firstName, sizeof(firstName), stdin);

    firstName[strlen(firstName) - 1] = '\0';

    puts("Enter Students Last Name: ");
    fgets(lastName, sizeof(lastName), stdin);

    lastName[strlen(lastName) - 1] = '\0';

    puts("Enter Students ID: ");
    scanf("%d", &studentID);


    print_student(firstName,lastName,studentID);

}


