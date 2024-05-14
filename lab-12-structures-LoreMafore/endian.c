/******************************************************************************
* Write a program called ‘Endian’ which will read an integer value from the 
* keyboard.  The program will change the values endianness, based on byte size 
* Endianness  If the number is read in Big Endian, it will be converted to 
* Little Endian.  If the number is read in Little Endian, it will be converted 
* to Big Endian.  
*
* Example: 
* Enter Integer to Convert: 39510935
* Integer 0x25AE397 Converted to 0x97E35A02 (2548259330)
******************************************************************************/

#include <stdio.h>

int notMyEndian(int integer)
{
    int firstByte;
    int secondByte;
    int thirdByte;
    int fourthByte;
    int myEndian;
    firstByte = (integer & 0x000000FF) >> 0;
    secondByte = (integer & 0x0000FF00) >> 8;
    thirdByte = (integer & 0x00FF0000) >> 16;
    fourthByte = (integer & 0xFF000000) >> 24;

//    firstByte <<= 24;
//    secondByte <<= 16;
//    thirdByte <<= 8;
//    fourthByte <<= 0;

    myEndian = (firstByte << 24) | (secondByte << 16) | (thirdByte << 8) | (fourthByte << 0);

    return myEndian;
}

int main( void )
{
    int int1 = 0;

    printf("Enter Integer to Convert: ");
    scanf("%d", &int1);

    int finish = notMyEndian(int1);

    printf("Integer: 0x%08x Converted to 0x%08x %lld ", int1, finish, finish);

    return 0;
}

