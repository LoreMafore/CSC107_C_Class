/******************************************************************************
* Standard telephone keypads contain the digits 0 through 9. The numbers 2 
* through 9 each have three letters associated with them, as is indicated by 
* the following table:
*
* Digit  Letter  Digit  Letter
*   2     A B C    6     M N O
*   3     D E F    7     P R S
*   4     G H I    8     T U V
*   5     J K L    9     W X Y
*
* Many people find it difficult to memorize phone numbers, so they use the 
* correspondence between digits and letters to develop seven-letter words 
* that correspond to their phone numbers.  For example, a person whose 
* telephone number is 686-2377 might use the correspondence indicated in the 
* above table to develop the seven-letter word “NUMBERS.”
*
* Businesses frequently attempt to get telephone numbers that are easy for 
* their clients to remember. If a business can advertise a simple word for 
* its customers to dial, then, no doubt, the business will receive a few more 
* calls.  Each seven-letter word corresponds to exactly one seven-digit 
* telephone number. The restaurant wishing to increase its take-home business 
* could surely do so with the number 825-3688 (i.e., “TAKEOUT”).

Each seven-digit phone number corresponds to many separate seven-letter words. 
* Unfortunately, most of these represent unrecognizable juxtapositions of 
* letters. It’s possible, however, that the owner of a barber shop would be 
* pleased to know that the shop’s telephone number, 424-7288, corresponds to 
* “HAIRCUT.” The owner of a liquor store would, no doubt, be delighted to find 
* that the store’s telephone number, 233-7226, corresponds to “BEERCAN.”  A 
* veterinarian with the phone number 738-2273 would be pleased to know that 
* the number corresponds to the letters “PETCARE.”
*
* Write a C program, called telephone.  Given a seven-digit number, writes to 
* the file every possible seven-letter word corresponding to that number. 
* There are 2187 (3 to the seventh power) such words.  Avoid phone numbers 
* with the digits 0 and 1.
*
* A phone number of 788-2593 will result in a list of
* SVVCLYF
* SVVCLYE
* SVVCLYD
* SVVCLXF
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define LENGTH 7
#define STRINGLENGTH 3
#define NUMBERS 8

char phoneLetters[NUMBERS][STRINGLENGTH+1] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"};

void writeWords(char *phoneNumber, char *word, int index, FILE *file)
{
    if (index == LENGTH)
    {
        fprintf(file, "%s\n", word);
        return;
    }

    int digit = phoneNumber[index] - '0';

    if (digit < 2 || digit > 9)
    {
        //This skips over the digits 1 and 0
        return;
    }

    char *letterOfDigits = phoneLetters[digit-2];

    for (int i =0; i < STRINGLENGTH; i++)
    {
        word[index] = letterOfDigits[i];
        writeWords( phoneNumber, word, index +1, file);
    }

}


int main( void )
{
    char number[LENGTH+1];
    printf("Enter a seven-digit number: ");
    scanf("%s", number);

    char filepath[] = "/Users/momer/lab-13-file-processing-LoreMafore/telephone.dat";
    FILE *file = fopen( filepath, "w");

    char word[LENGTH+1];

    writeWords(number,word,0,file);
    fclose(file);

    return 0;
}

