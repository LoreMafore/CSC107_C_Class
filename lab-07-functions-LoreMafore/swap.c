/*****************************************************************************
* Write a C program called ‘swap’, which prompts the user for two decimal 
* numbers.  These two numbers are passed by reference to a function called 
* ‘swap’.  The swap function will have no return value but the values of the 
* two variables will be switched.
* 
* Example
* Enter First  integer: 124
* Enter Second integer: 65
* Before Swap: input1 = 124, input2 = 65
* After  Swap: input1 = 65, input2 = 124
******************************************************************************/
#include <stdio.h>

int swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}


int main( void )
{
    int firstNumber = 0;
    int secondNumber = 0;


    puts("What is your first number? ");
    scanf("%d", &firstNumber);

    puts("What is your first number? ");
    scanf("%d", &secondNumber);

    swap(&firstNumber, &secondNumber);

    printf("Swap numbers:\n \bFirst one: %d\n \bSecond one: %d", firstNumber,secondNumber);
}
