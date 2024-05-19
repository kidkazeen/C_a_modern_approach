#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a number(four digit max): ");
    scanf("%d", &input);

    if(input > -10 && input < 10)
    {
        printf("The number %d has 1 digit\n", input);
    }
    else if(input > -100 && input <100)
    {
        printf("The number %d has 2 digits\n", input);
    }
    else if(input > -1000 && input <1000)
    {
        printf("The number %d has 3 digits\n", input);
    }
    else if(input > -10000 && input <10000)
    {
        printf("The number %d has 4 digits\n", input);
    }
    else
    {
        printf("invalid input\n");
    }
}