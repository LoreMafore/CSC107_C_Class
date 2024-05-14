/******************************************************************************
* Write a C program called ‘search’.  This program will prompt the user to 
* enter two strings; one source string and one search string.  Write a 
* function that will search a string for any one of a given set of characters.  
*
* Your function should match the following functional prototype:
* char *find_char( char const *source, char const *search );
*
* The basic idea is to locate the first character in the source string that 
* matches any of the characters in the search characters.  The function then 
* returns a pointer to the place in the source string where the first match 
* was found.  If none of the characters in the source string match any of the 
* characters in the search string, then a NULL pointer is returned.  If either 
* argument is NULL, or either string is empty, then a NULL pointer is returned
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *findchar(char* sentence, char* find, int count)
{
    size_t size = strlen(sentence);
    size_t size2 = strlen(find);

    if(size2 == 1 && find[0] == '\n')
    {
        find[0] = '`';
    }
    else if (size2 == 0)
    {
        printf("\nYou did not put in a word");
    }
    else if (size == 0)
    {
        printf("\nYou did not put in a sentence");
    }

    for(int i = 0; i < size; i++ )
    {
        for(int j = 0; j < size2; j++)
        {
            if(sentence[i] == find[j])
            {
                return &sentence[i];
            }

        }
    }
    return NULL;
}

int main( void )
{
    char *sentence = malloc(100 * sizeof(char)); // Allocate memory for sentence
    if (sentence == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    char *find = malloc(100 * sizeof(char)); // Allocate memory for find
    if (find == NULL) {
        printf("Memory allocation failed.\n");
        free(sentence); // Free previously allocated memory
        return 1;
    }

    int count= 0;

    printf("Write a sentence:");
    fgets(sentence, 100 ,stdin);

    printf("Write a word or character to find in the sentence:");
    fgets(find, 100, stdin);

    printf("\nSentence: %s",sentence);
    printf("Word: %s",find);

    char * res = findchar(sentence,find,count);

    if(res != NULL){
        printf("\n%c", *res);
    } else {
        printf("\nNULL");
    }

    free(sentence);
    free(find);

    return 0;
}

