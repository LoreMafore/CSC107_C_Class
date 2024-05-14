/*****************************************************************************
* Write a program that is given two integers representing a speed limit 
* and driving speed in miles per hour (mph) and outputs the traffic ticket 
* amount.
*
* Driving 10 mph under the speed limit (or slower) receives a $50 ticket.  
* Driving 6-20 mph over the speed limit receives a $75 ticket.  
* Driving 21-40 mph over the speed limit receives a $150 ticket.  
* Driving faster than 40 mph over the speed limit receives a $500 ticket.  
* Otherwise, no ticket is received.  
*
* Example #1:
* Enter Speed Limit: 35
* Enter Driving Speed: 45
*
* Speed Violation: +10 miles
* Fine: $75.00
*
* Example #2:
* Enter Speed Limit: 35
* Enter Driving Speed: 26
* 
* Speed Violation: -9 miles (None)
* Fine: $0.00

******************************************************************************/

#include <stdio.h>

void speedTicket()
{
    //defining variables
    int spdLimit = 45;
    int spd = 0;

    //assigning values to the variables
    printf("The speed limit is %d. How fast are you going? ", spdLimit);
    scanf("%d", &spd);

    int speedDiff = spd - spdLimit;

    //condtional statements determining what speed one is going and the consquence for it
    if(spd <= spdLimit - 10)
    {
        printf("You are charged 50$ for going %d under the speed limit", speedDiff *-1);
    }

    else if(spd > spdLimit - 10 && spd < spdLimit + 6)
    {
        puts("You are driving within the parameters of the law.");
    }

    else if(spd >= spdLimit + 6 && spd <= spdLimit + 20)
    {
        printf("You are charged 75$ for going %d over the speed limit", speedDiff);
    }

    else if(spd >= spdLimit + 21 && spd <= spdLimit + 40)
    {
        printf("You are charged 150$ for going %d over the speed limit", speedDiff);
    }
    else
    {
        printf("You are charged 500$ for going %d over the speed limit", speedDiff);
    }



}
