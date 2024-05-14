#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
    char first_name[21];
    char last_name[21];
    int age;
    struct Employee *nextptr;
} Employee_t;

Employee_t *headptr = NULL;
Employee_t *nodeptr = NULL;
Employee_t *newptr = NULL;
Employee_t *preptr;
bool no_match = false;
char name[21];

void print_employee( Employee_t *employee )
{
    printf( "%s, %s [%d]\n", employee->last_name, employee->first_name, employee->age );
}

void add_employee()
{
    //Allocate memory for new Employee
    newptr = malloc(sizeof(Employee_t));
    if (newptr != NULL)
    {
        printf("\n");
        printf("Enter Employee's First Name: ");
        scanf("%s", &newptr->first_name);

        printf("Enter Employee's Last Name: ");
        scanf("%s", &newptr->last_name);

        printf("Enter Employee's Age Name : ");
        scanf("%d", &newptr->age);

        newptr->nextptr = NULL; // making sure nextptr is pointing to Null

        if(headptr == NULL)
        {
            //Assign Head Pointer
            headptr = newptr;
        }
        else
        {
            Employee_t *current = headptr;
            Employee_t *previous = NULL;

            while (current != NULL && strcmp(newptr->last_name, current->last_name) > 0)
            {
                previous = current;
                current = current->nextptr;
            }

            if (previous == NULL)
            {
                newptr->nextptr = headptr;
                headptr = newptr;
            }

            else
            {
                previous->nextptr = newptr;
                newptr->nextptr = current;
            }

        }
    }
}

void display_employees(char facing[12])
{
    printf("\n\nEmployee List (%s)\n", facing);
    nodeptr = headptr;
    while (nodeptr != NULL)
    {
        print_employee( nodeptr );
        nodeptr = nodeptr->nextptr;
    }
    printf("\n\n");
}


void display_employees_backwards()
{
    char backward[12] = "Backward";
    Employee_t *current = headptr;
    Employee_t *prev = NULL;
    Employee_t *next = NULL;
    while (current != NULL)
    {
        next = current->nextptr;
        current->nextptr = prev;
        prev = current;
        current = next;
    }
    headptr = prev;
    display_employees(backward);
    current = headptr;
    prev = NULL;
    next = NULL;
    while (current != NULL)
    {
        next = current->nextptr;
        current->nextptr = prev;
        prev = current;
        current = next;
    }
    headptr = prev;
}



void delete_employee()
{
    printf("Enter Last Name of Employee to Remove: ");
    scanf("%s", name);

    nodeptr = headptr;
    preptr = NULL;

    while (nodeptr != NULL)
    {
        no_match = strcmp( nodeptr->last_name, name);
        if (no_match == 0)
        {
            if( nodeptr == headptr)
            {
                headptr = headptr->nextptr;
            }
            else
            {
                preptr->nextptr = nodeptr->nextptr;
                if (strcmp(nodeptr->last_name, name))
                {
                    free(nodeptr);
                    printf("Employee with last name %s has been deleted.\n", name);
                    preptr->nextptr = nodeptr->nextptr;
                }
            }

        }
        preptr = nodeptr;
        nodeptr = nodeptr->nextptr;
    }
}

int main(void)
{
    Employee_t *headptr = NULL;
    Employee_t *nodeptr = NULL;
    Employee_t *newptr = NULL;
    char choice;
    bool goodbye = false;

    do
    {
        printf( "\n\nEmployee Linked List\n" );
        printf( "1. Add New Employee\n" );
        printf( "2. List Employees (Forward)\n" );
        printf( "3. List Employees (Backward)\n" );
        printf( "4. Delete Employee\n" );
        printf( "0. Exit\n" );
        printf( "Enter Selection: " );
        scanf( "%d", &choice );
        switch( choice )
        {
            case 1:
                add_employee();
                break;

            case 2:
                display_employees("Forward");
            break;

            case 3:
                display_employees_backwards();
                break;

            case 4:
                delete_employee();
                break;

            case 0:
                goodbye = true;
            break;

            default:
            break;
        }
    } while ( goodbye == false );

    return 0;
}
