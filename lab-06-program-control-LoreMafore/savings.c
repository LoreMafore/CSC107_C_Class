/*****************************************************************************
*  Write a C program that outputs the amount of a savings account each year 
*  for 10 years, give an input initial amount and interest rate.  A for loop 
*  iterates 10 times, such that each iteration represents one year, output 
*  that year’s savings amount in proper dollar format.
* 
*  Example
*  Enter initial savings: 10000
*  Enter interest rate  : 0.05
*
*  Annual savings for 10 years: 
*  $10000.00
*  $10500.00
*  $11025.00
*  $11576.25
*  $12155.06
*  $12762.82
*  $13400.96
*  $14071.00
*  $14774.55
*  $15513.28
*
******************************************************************************/

#include <stdio.h>

void savings( void )
{
    //initializing variables
    int years = 0;
    float startSaving = 0;
    float interest = 0;

    puts("What is your intial amount? ");
    scanf("%f", &startSaving);
    float totalSaving = startSaving;

    puts("What is your interest? ");
    scanf("%f", &interest);

    //prints the 1 year
    printf("Annual savings for 10 years: \nYear 1: $%.2f\n", startSaving);
    //for loop that goes from 2 years to ten years that increases the interest overtime
    for (years = 2; years <= 10; years++)
    {
        totalSaving += interest * totalSaving;
        printf("Year %d: $%.2f\n", years, totalSaving);
    }

}
