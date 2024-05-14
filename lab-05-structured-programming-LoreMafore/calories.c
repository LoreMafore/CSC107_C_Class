/*****************************************************************************
* The following equation estimates the average calories burned for a person 
* when exercising, which is based on a scientific journal article.
*
* Calories = (( Age * 0.2757 ) + ( Weight * 0.03295 ) 
*          + ( Heart Rate * 1.0781 ) – 75.4991 ) * Time / 8.368
*
* Write a program using inputs for age (years), weight (pounds), 
* heart rate (beats per minute), and time (minutes), respectively.  
* Output the average calories burned for a person.
* 
* Output each floating-point value with two digits after the decimal point, 
* which can be achieved as follows:
* printf( “%0.2f”, yourValue );
* 
* Example: 
* Enter Age (years): 49 
* Enter Weight (pounds): 155 
* Enter Heart Rate (beats per minute): 148 
* Enter Duration (minutes): 60
*
* Calories Burned are 736.21
******************************************************************************/

#include <stdio.h>

void burntCalories()
{
    //defining variables
    float age = 0;
    float weight = 0;
    float heartRate = 0;
    float duration = 0;
    float calories = 0;

    //assigning values to the variables
    puts("What is your age in years? ");
    scanf("%f", &age);

    puts("What is your weight in pounds? ");
    scanf("%f", &weight);

    puts("What is your Heart Rate in bpm? ");
    scanf("%f", &heartRate);

    puts("What is your Duration in hours? ");
    scanf("%f", &duration);

    //Calculating the total
    calories = (( age * 0.2757 ) + ( weight * 0.03295 ) + ( heartRate * 1.0781 ) - 75.4991 ) * duration / 8.368;

    //Printing the total
    printf("I burnt %0.2f calories", calories);

}
