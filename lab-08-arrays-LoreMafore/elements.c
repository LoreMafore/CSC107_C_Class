/******************************************************************************
* Write a program that reads a list of positive integers from input into an 
* array.  The program should read a maximum number of 20 integers or stop 
* after a negative number is entered.  The size of the array should be sized 
* by defining a constant called MAX_LENGTH.
*
* Enter integer # 1: 25
* Enter integer # 2: 51
* Enter integer # 3: 4
* Enter integer # 4: 200
* Enter integer # 5: 35
* Enter integer # 6: -1
* 
* That list is followed by two more integers representing lower and upper 
* bounds of a range. Your program should output all integers from the list 
* that are within that range (inclusive of the bounds). For coding simplicity,
*  follow each output integer by a space.
* 
* Enter the Lower Bound Value: 3
* Enter the Upper Bound Value: 50
* 
* The entered values in range: 25 4 35
******************************************************************************/
#include <stdio.h>
#define MAX_LENGTH 20


int makeArray(int* array)
{
    for(int i = 0; i < MAX_LENGTH; i++)
    {
        printf("\bEnter integer # %d: ", i+1);
        scanf("%d", &array[i]);
        fflush(stdin);

        if(array[i] < 0)
        {
            break;
        }
    }
}

int bounds(int* array, int lower, int higher)
{

    printf("\bEnter the Lower Bound Value: ");
    scanf("%d", &lower);

    printf("\bEnter the Higher Bound Value: ");
    scanf("%d", &higher);

    for (int i = 0; i < MAX_LENGTH; i++) {

        if(array[i] >= lower && array[i] <= higher)
        {
            printf("\b%d\n", array[i]);
        }
    }
}


int main( void )
{
    int integerArray[MAX_LENGTH] = {0};
    int lower = 0;
    int higher = 0;

    makeArray(integerArray);

    bounds(integerArray,lower,higher);

    return 0;

}
