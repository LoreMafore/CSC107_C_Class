#include <stdio.h>

int ArrowheadFunction( void )
{
    int head = 0;
    int shaft = 0;

    puts("Enter the first number, that will be the head of the arrow: ");
    scanf("%d", &head);
    puts("Enter the second number, that will be the shaft of the arrow: ");
    scanf("%d", &shaft);

    printf("    %d\n", head);
    printf("    %d%d\n", head,head);
    printf("%d%d%d%d%d%d%d\n", shaft, shaft, shaft, shaft,head,head,head);
    printf("%d%d%d%d%d%d%d%d\n", shaft, shaft, shaft, shaft,head,head,head,head);
    printf("%d%d%d%d%d%d%d\n", shaft, shaft, shaft, shaft,head,head,head);
    printf("    %d%d\n", head,head);
    printf("    %d\n", head);
}
