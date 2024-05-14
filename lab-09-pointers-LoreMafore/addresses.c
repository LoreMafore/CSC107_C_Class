/******************************************************************************
* Create a C program called ‘addresses’.  This program will consist of a 
* simple function called print_addr( int x ), whose sole purpose is to print 
* the address of the integer x passed to it.  Create an integer variable in 
* main, print out its address, and then pass that variable to print_addr.  
* Compare the results.  
******************************************************************************/

#include <stdio.h>

int print_addr(int x)
{
    int *x_ptr = &x;
    printf("\nAddress of the second variable: %p", x_ptr);
}


int main( void )
{
    int address = 0;
    printf("Give me a variable:");
    scanf("%d", &address);
    int *address_ptr = &address;
    printf("Address of the first variable: %p", address_ptr);

    print_addr(address);

    return 0;
}

