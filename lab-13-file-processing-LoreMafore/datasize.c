/******************************************************************************
* Write a program that uses the sizeof operator to determine the sizes in bytes 
* of the various data types on your computer system.  Write the results to the 
* file datasize.dat” so you may print the results later.  
*
* The format for the results in the file should be as follows:
* 
* Data Type            Size
* ==================   ====
* char                    1
* unsigned char           1
* short int               2
* unsigned short int      2
* int                     4
* unsigned int            4
* long int                4
* unsigned long int       4
* float                   4
* double                  8
* long double            16
******************************************************************************/

#include <stdio.h>

int main( void )
{

    int character = sizeof(char);
    int unsignedChar = sizeof(unsigned char);
    int shortInt = sizeof(short int);
    int unsignedShortInt = sizeof(unsigned short int);
    int interger = sizeof(int);
    int unsignedInt = sizeof(unsigned int);
    int longInt = sizeof(long int);
    int unsignedLongInt = sizeof(unsigned long int);
    int floating = sizeof(float);
    int doublle = sizeof(double);
    int longDouble = sizeof(long double);


    FILE *fptr;
    char filepath[] = "/Users/momer/lab-13-file-processing-LoreMafore/datasize.dat";

    fptr = fopen(filepath, "w");

    fprintf(fptr, "Data Type           Size");
    fprintf(fptr,"\n==================   ====");
    fprintf(fptr,"\nchar                    %d", character);
    fprintf(fptr,"\nunsigned char           %d", unsignedChar);
    fprintf(fptr,"\nshort int               %d", shortInt);
    fprintf(fptr,"\nunsigned short int      %d", unsignedShortInt);
    fprintf(fptr,"\nint                     %d", interger);
    fprintf(fptr,"\nunsigned int            %d", unsignedInt);
    fprintf(fptr,"\nlong int                %d", longInt);
    fprintf(fptr,"\nunsigned long int       %d", unsignedLongInt);
    fprintf(fptr,"\nfloat                   %d", floating);
    fprintf(fptr,"\ndouble                  %d", doublle);
    fprintf(fptr,"\nlong double            %d", longDouble);

    fclose(fptr);

    return 0;
}

