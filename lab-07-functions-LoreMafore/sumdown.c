/*****************************************************************************
* Write a C program called ‘sumdown.exe’, which prompts the user for a decimal 
* number.  This decimal number is passed by value to a function called ‘sum’, 
* which returns the sum of every number from the entered number to 1.
*
* Ensure that the entered number is a positive number.
*
* Example 1
* Enter a decimal number to calculate the sum from: 4
* The sum from 1 to 4: 10
*
* Example 2
* Enter a decimal number to calculate the sum from: 5
* The sum from 1 to 5: 15
*
* Example 3
* Enter a decimal number to calculate the sum from: -2
* Invalid Entry
*
******************************************************************************/
#include <stdio.h>

int sum(int number)
{
    int increment = 0;
    int sumTotal = 0;

    for(increment = 0; increment < number; increment+=1)
    {
        sumTotal += number - increment;
    }

    return sumTotal;
}

int main( void )
{
    int number = 0;
    int sumTotal = 0;
    puts("Enter a decimal number to calculate the sum from: ");
    scanf("%d", &number);

    sumTotal = sum(number);

    printf("%d", sumTotal);

}
