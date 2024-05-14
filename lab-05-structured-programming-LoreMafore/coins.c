/*****************************************************************************
* Given four values representing counts of quarters, dimes, nickels, and 
* pennies.  Output the total amount as dollars and cents.
*
* Output each floating point value with two digits after the decimal point, 
* which can be achieved using the following formatted print statement.
* printf( "Amount: %0.2f\n", dollars );
*
* Example:
* Enter the Number of Quarters: 4
* Enter the Number of Dimes: 3
* Enter the Number of Nickels: 2
* Enter the Number of Pennies: 1
*
* Cash Amount: $1.41
******************************************************************************/

#include <stdio.h>

void coins()
{
    //defining variables
    float Quarters = 0;
    float Dimes = 0;
    float Nickels = 0;
    float Pennies = 0;

    //assigning values to the variables
    printf("Enter the Number of Quarters: ");
    scanf("%f", &Quarters);

    printf("Enter the Number of Dimes :");
    scanf("%f", &Dimes);

    printf("Enter the Number of Nickels :");
    scanf("%f", &Nickels);

    printf("Enter the Number of Pennies :");
    scanf("%f", &Pennies);

    //Calculating the total
    float total = (Quarters*.25)+(Dimes*.1)+(Nickels*.05)+(Pennies*.01);

    //Printing the total
    printf("\nThe total is: %0.2f", total);
}
