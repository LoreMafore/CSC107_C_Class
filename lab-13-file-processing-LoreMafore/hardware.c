/******************************************************************************
* You’re the owner of a hardware store and need to keep an inventory that can 
* tell you what tools you have, how many you have and the cost of each one.  
* Your program should implement a structure to store the inventory information 
* and store the data in a file called “hardware.dat”.  Upon initialization, 
* if the files does not exist, it will be created.  Upon initialization, if 
* the file does exist, the existing data will be read into the application 
* and displayed to the user.  The application will ask the user if they would 
* like to add new inventory.  If the answer is yes, the user will be prompt 
* for the hardware information.  If the answer is no, the entered inventory 
* will be written to the file.  You do not need to edit any records or delete 
* any records.
*
* Tool Name         Quantity   Unit Cost   Total Cost
* Electric Sander       7       $  57.98    $  405.86
* Hammer               76       $  11.99    $  911.24
* Jig Saw              21       $  11.00    $  231.00
* Lawn Mower            3       $  79.50    $  238.50
* Power Saw            18       $ 103.48    $ 1862.64
* Screwdriver         106       $   6.99    $  740.94
******************************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct Inventory
{
    char toolName[25];
    int quantity;
    float unitCost;
    float totalCost;
}inventory;

int main( void )
{
    int loop = 0;
    char answer[10];


    FILE *fptr;
    char filepath[] = "/Users/momer/lab-13-file-processing-LoreMafore/hardware.dat";
    fptr = fopen(filepath, "a");

    // Check if the file is empty
    fseek(fptr, 0, SEEK_END);
    if (ftell(fptr) == 0) {
        fprintf(fptr, "Tool Name               Quantity   Unit Cost   Total Cost\n");
    }
    rewind(fptr); // Reset file pointer to the beginning

   while (loop == 0)
    {
        printf("\nWould you like to add something to inventory?(y/n)\n");
        fgets(answer, sizeof(answer), stdin);

        if (answer[strlen(answer) - 1] == '\n')
            answer[strlen(answer) - 1] = '\0';

        if ( strcmp(answer, "y") == 0 || strcmp(answer, "Y") == 0 || strcmp(answer, "yes") == 0 || strcmp(answer, "Yes") == 0 )
        {
            inventory item;
            printf("What is the tool name?\n");
            fgets(item.toolName,sizeof(item.toolName),stdin);
            if (item.toolName[strlen(item.toolName) - 1] == '\n')
                item.toolName[strlen(item.toolName) - 1] = '\0';
            printf("How many tools do you want?\n");
            scanf("%d", &item.quantity);
            getchar();
            printf("How much is each item?\n");
            scanf("%f", &item.unitCost);
            getchar();
            item.totalCost = item.quantity*item.unitCost;

            fprintf(fptr, "%-25s %-9d $%7.2f    $%8.2f\n", item.toolName, item.quantity, item.unitCost, item.totalCost);
        }

        else
            loop++;

    }


    fclose(fptr);
    return 0;
}

