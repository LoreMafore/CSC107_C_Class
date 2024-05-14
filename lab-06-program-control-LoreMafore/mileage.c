/*****************************************************************************
*  Drivers are concerned with the mileage obtained by their automobiles.  One 
*  driver has kept track of several tankfuls of gasoline by recording miles 
*  driven and gallons used for each tankful.  Develop a ‘C’ program that will 
*  input the miles driven and gallons used for each tankful.  The program 
*  should calculate and display the miles per gallon obtained for each tankful.  
*  After processing all the input information, the program should calculate 
*  and print the combined miles per gallon obtained for all tankfuls.  
* 
*  A do … while statement must be used to terminate the loop if a -1 is entered 
*  for the gallons used.
*  
*  The miles per gallon should have no more than 3 digits after the 
*  decimal point.
*  
*  Example
*  Enter the gallons used (-1 to end): 12.8
*  Enter the miles driven            : 287
*  The miles/gallon for this tank was: 22.422
*  
*  Enter the gallons used (-1 to end): 10.3
*  Enter the miles driven            : 200
*  The miles/gallon for this tank was: 19.417
*  
*  Enter the gallons used (-1 to end): 5
*  Enter the miles driven            : 120
*  The miles/gallon for this tank was: 24.000
*  
*  Enter the gallons used (-1 to end): -1
*  
*  The overall average miles/gallon was 21.601
*  
******************************************************************************/

#include <stdio.h>

void mileage( void )
{
    //initializing variables
    float gas = 0;
    float milesDriven = 0;
    float totalGas = 0;
    float totalMilesDriven = 0;

    //A do while loop that checks the miles/per gallon of multiple vehicles
    do{
        printf("Enter the gallons used (-1 to end): \n");
        scanf("%f", &gas);

        printf("Enter the miles driven: \n");
        scanf("%f", &milesDriven);

        if(gas < 1)
        {
            puts("You have driven no miles.\n");
            break;
        }

        else if( gas >= 1 && milesDriven >= 1)
        {
            printf("The miles/gallon for this tank was: %.3f\n", milesDriven/gas);
            //adds to total so that we can get a total miles/gallon
            totalGas += gas;
            totalMilesDriven += milesDriven;
        }

        else
        {
            puts("You have driven no miles.\n");
            break;
        }

    }while(1);

    printf("The overall average miles/gallon was: %.3f", totalMilesDriven/totalGas);

}
