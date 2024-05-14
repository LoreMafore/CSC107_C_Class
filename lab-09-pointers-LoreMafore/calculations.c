/******************************************************************************
* Write a C program called ‘calculations’ to perform all arithmetic operations
* using pointers.  Arithmetic operators are the operators which are used to 
* perform various mathematical operations such as addition, subtraction, 
* multiplication, division, and modulus.
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    int variable1 = 0;
    int variable2 = 0;
    printf("Give me an interger:");
    scanf("%d", &variable1);
    printf("Give me an interger:");
    scanf("%d", &variable2);

    int *variable1_ptr = &variable1;
    int *variable2_ptr = &variable2;

    int addition = *variable1_ptr + *variable2_ptr;
    int subtraction = *variable2_ptr - *variable1_ptr;
    int division = *variable2_ptr / *variable1_ptr;
    int multiply = *variable2_ptr * *variable1_ptr;
    int mod = *variable2_ptr % *variable1_ptr;

    printf("\nAddition: %d", addition);
    printf("\nSubtration: %d", subtraction);
    printf("\nDivision: %d", division);
    printf("\nMultiply: %d", multiply);
    printf("\nMod: %d", mod);

    return 0;
}

