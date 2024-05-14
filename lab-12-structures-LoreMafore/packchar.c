/******************************************************************************
* The left-shift operator can be used to pack four character values into a 
* four-byte unsigned int variable. 
*
* Write a program called ‘packchar.c’, that inputs four characters from the 
* keyboard and passes them to function packCharacters. 
* 
* To pack four characters into an unsigned int variable, assign the first 
* character to the unsigned int variable, shift the unsigned int variable 
* left by 8 bit positions and combine the unsigned variable with the 
* second character using the bitwise inclusive OR operator.  Repeat this 
* process for the third and fourth characters. 
*
* The program should output the characters in their bit format before and 
* after they’re packed into the unsigned int to prove that the characters 
* are in fact packed correctly in the unsigned int variable.
*
* Example:
* Enter Four Characters: ATe1
* Packed Four Digit Integer: 0x41546531 (1096049969) 
******************************************************************************/

#include <stdio.h>

unsigned int packCharacters(char character1, char character2, char character3, char character4)
{
    unsigned int packedValue = character1;

    packedValue = (packedValue << 24) | (character2 << 16) | (character3 << 8) | character4;

    return packedValue;
}



int main( void )
{
    char char1, char2, char3, char4;
    printf("Enter Four Characters: ");
    scanf("%c%c%c%c", &char1, &char2, &char3, &char4);

    unsigned int packedValue = packCharacters(char1, char2, char3, char4);

    printf("Packed Four Digit Interger: 0x%x (%u)\n", packedValue, packedValue);

}

