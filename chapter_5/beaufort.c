#include <stdio.h>

int main(void)
{
    int wspeed;

    printf("Enter a wind speed(knots): ");
    scanf("%d", &wspeed);

    if(wspeed < 1)
        printf("Calm\n");
    else if(wspeed >= 1 && wspeed <= 3)
        printf("Light air\n");
    else if(wspeed >= 4 && wspeed <= 27)
        printf("Breeze\n");
    else if(wspeed >= 28 && wspeed <= 47)
        printf("Gale\n");
    else if(wspeed >= 48 && wspeed <= 63)
        printf("Storm\n");
    else if(wspeed > 63)
        printf("Hurricane\n");
}