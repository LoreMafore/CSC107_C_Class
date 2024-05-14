

#include <stdio.h>

int BaseballFunction(void)
{
    int twins = 0;
    int padres = 0;
    int royals = 0;


   scanf( "%d", &padres );
   scanf( "%d", &twins );
   scanf( "%d", &royals );

   printf( "Last night the Padres scored %d\n", padres);
   printf( "the Twins scored %d \nand\n", twins);
   printf( "the Royals scored %d.", royals );
   //return 0;
}
