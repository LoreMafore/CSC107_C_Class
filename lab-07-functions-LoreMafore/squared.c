/*****************************************************************************
* Write a C program called ‘squared’, which prompts the user for a 
* floating point number.  This floating point number is passed by value to a 
* function called ‘square’, which returns the square of the value.  
*
* Print out the result, with no more than three decimal points.
*
* Example 1
* Enter a floating point number to square: 12
* The square of 12.000000 is 144.000
* 
* Example 2
* Enter a floating point number to square: 34.15
* The square of 34.150002 is 1166.223
*
******************************************************************************/
#include <stdio.h>


float square(float orginalNumber)
{
    printf("The square of %.6f is %.3f", orginalNumber, orginalNumber*orginalNumber);
}

int main( void )
{
    float inputNumber = 0;
    puts("Enter a floating point number to square: ");
    scanf("%f", &inputNumber);

    square(inputNumber);

    return 0;
}
