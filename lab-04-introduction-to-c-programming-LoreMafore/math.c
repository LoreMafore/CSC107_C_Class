#include <stdio.h>

int MathFunction(void)
{
    int value1 = 0;
    int value2 = 0;
    int sum,diff,product,quotient,remainder = 0;

    puts("Enter the first number: ");
    scanf("%d", &value1);
    puts("Enter the second number: ");
    scanf("%d", &value2);

    sum = value1 + value2;
    diff = value1 - value2;
    product = value1 * value2;
    quotient = value1 / value2;
    remainder = value1 % value2;


    printf("The sum of the two numbers is %d\n", sum);
    printf("The difference of the two numbers is %d\n", diff);
    printf("The product of the two numbers is %d\n", product);
    printf("The quotient of the two numbers is %d\n", quotient);
    printf("The remainder of the two numbers is %d\n", remainder);

}
