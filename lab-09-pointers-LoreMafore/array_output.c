/******************************************************************************
* Write a C program called ‘array_output’, that creates an array made up of 10 
* floats.  The array is passed to a function called print_array(), which will 
* print the values of the array using pointers. 
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int array_output(float *Arrays, int length)
{
    Arrays[length];

    printf("Give me some float variables.");
    for(int i = 0; i < length; i++)
    {
        printf("\nFloat %d: ", i+1);
        scanf("%f", &Arrays[i]);
    }

}

void print_array(float *array, int length)
{

    for(int i = 0; i < length; i++)
    {
        float *array_ptr = &array[i];
        printf("\nFloat %d address: %p"
                      "\nFloat %d value: %.2f", i+1,(void*)array_ptr, i+1, *array_ptr);
    }
}


int main( void )
{
    int length = 10;

    float *Array = malloc(length * sizeof(float));
    if (Array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    array_output(Array, length);

    print_array(Array, length);

    free(Array);

    return 0;
}

