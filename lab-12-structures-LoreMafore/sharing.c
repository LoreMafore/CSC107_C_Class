/******************************************************************************
* Create a union called integer with members char c, short s, int i and long b.  
*
* Write a program called ‘sharing.c’, that inputs value of type char, short, 
* int and long and stores the values in union variables of type union integer. 
*
* Each union variable should be printed as a char, a short, an int and a long.  
*
* Do the values print correctly as they were entered?  Why or Why Not? 
******************************************************************************/

#include <stdio.h>

typedef union integer
{
    char c;
    short s;
    int i;
    long b;

}variables;



int main( void )
{
    variables diff;

    printf("Enter a char: ");
    scanf("%c", &diff.c);

    printf("Enter a short: ");
    scanf("%hd", &diff.s);

    printf("Enter a int: ");
    scanf("%d", &diff.i);

    printf("Enter a long: ");
    scanf("%ld", &diff.b);

    printf("Enter a char: %c", diff.c);
    printf("\nEnter a short: %hd", diff.s);
    printf("\nEnter a int: %d", diff.i);
    printf("\nEnter a long: %ld", diff.b);


    return 0;
}
//The numbers values will be the same due to unions sharing the same memory thus they write over each other.
