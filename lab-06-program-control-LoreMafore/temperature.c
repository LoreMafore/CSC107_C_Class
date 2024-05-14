/*****************************************************************************
*  Write a C program that generates a table of Celsius and Fahrenheit 
*  temperature values, in increments of 5 C.  The program will prompt the user 
*  for the beginning temperature.  The for loop will make 10 iterations, 
*  incrementing the 5 degrees from the beginning temperature.   The output 
*  must be formatted properly in columns, as shown.
*
*  Example
*  Enter Starting Temperature in degrees C: -10
*  -10 C is  14.00 F
*  - 5 C is  23.00 F
*    0 C is  32.00 F
*    5 C is  41.00 F
*   10 C is  50.00 F
*   15 C is  59.00 F
*   20 C is  68.00 F
*   25 C is  77.00 F
*   30 C is  86.00 F
*   35 C is  95.00 F
*   40 C is 104.00 F
*  
******************************************************************************/

#include <stdio.h>

void tempature( void )
{
    //initializing variables
    float temp= 0;
    int counter = 0;
    float fahrenheit = 0;

    puts("What is your temperature in Celsius");
    scanf("%f", &temp);

    //A for loop that translates C to F and then adds 5 for ten repetitions
    for(counter = 0; counter <= 10; counter++)
    {
        fahrenheit = 1.8*temp + 32;
        printf("%.3f C is equal to %.3f F\n", temp,fahrenheit);
        temp += 5;
    }

}
