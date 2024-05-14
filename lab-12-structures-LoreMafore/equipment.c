/******************************************************************************
* Write a program called equipment.c
* accomplishing each of the following tasks:
* a) Define a structure called ‘part’, which contains 
*    • an unsigned int variable, partNumber. 
*    • a character array, partName, that will contain at most 25 characters 
*      (including null terminator)
* b) Define Part to be synonym for the type “struct part”.
* c) Use Part to declare variable ‘a’ to be of type struct part, and array 
*    b[10] to be of type struct part and variable ptr to be of type pointer 
*    to struct part.
* d) Read a part number and a part name from the keyboard into the individual 
*    members of variable a
* e) Assign the member values of variable a to element 3 of array b
* f) Assign the address of array b to the pointer variable ptr
* g) Print the member values of element 3 of array b using the variable ptr 
*    and the structure pointer operator to refer to the members
******************************************************************************/

#include <stdio.h>

typedef struct part
{
   unsigned int partNumber;
   char partName[26];
}Part;



int main( void )
{
    Part a;
    Part b[10];
    Part *ptr;

    printf("What is your part's name:");
    scanf("%25s", a.partName);

    printf("\nWhat is your part's number:");
    scanf("%u", &a.partNumber);

    b[2] =a;
    ptr = b;

    printf("Part Name: %s\n", ptr[2].partName);
    printf("\nPart Number: %u\n", ptr[2].partNumber);

    return 0;
}

