/******************************************************************************
* Write a program that reads a list of positive floating point number from
* keyboard input into an array.  The program should read a maximum number of
* 10 floating point number or stop after a negative number is entered.  The
* program modifies the array by shifting each element to the right one
* position and by shifting the last element to the first position.  The size
* of the array should be sized by defining a constant called MAX_LENGTH.
*
* Enter integer # 1: 2.2
* Enter integer # 2: 4.1
* Enter integer # 3: 6.3
* Enter integer # 4: 8.0
* Enter integer # 5: 10.7
* Enter integer # 6: 13.5
* Enter integer # 7: -1
*
* Entered array is : 2.2 4.1 6.3 8.0 10.7 13.5
* Modified array is: 13.5 2.2 4.1 6.3 8.0 10.7
******************************************************************************/

#include <stdio.h>
#define MAX_LENGTH 10

int enteredArray(float* array)
{

    int ic = 0;

    for(int i = 0; i < MAX_LENGTH; i++)
    {

        printf("\bEnter float # %d: ", i+1);

        scanf("%f", &array[i]);



        if (array[i] < 0)
        {
            printf("\bNegative number entered. Stopping input.\n");
            //array[i+1] = '\0';
            break;
        }

        ic++;

    }

    printf("\bEntered array: ");
    for (int i = 0; i < ic; ++i)
    {
        printf( "%.1f ", array[i]);
    }

    return ic;
}

int modifiedArray(float* array, int arrayLength)
{
    float tempVal = array[arrayLength - 1];

    for (int i = arrayLength - 1; i > 0; --i)
    {
        array[i] = array[i - 1];
    }
    array[0] = tempVal;

    printf("\nModified array: ");
    for (int i = 0; i < arrayLength; ++i)
    {
        printf("%.1f ", array[i]);
    }
}


int main( void )
{
    float floatArray[MAX_LENGTH] ={0};

    int ic = enteredArray(floatArray);

    modifiedArray(floatArray, ic);

    return 0;
}
