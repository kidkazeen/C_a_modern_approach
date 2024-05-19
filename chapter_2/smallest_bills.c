#include <stdio.h>

int main(void)
{
    int input = 0;
    int twentys = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;
    
    printf("Enter a dollar amount: ");
    scanf("%d",&input);

    twentys = input / 20;
    input = input - twentys * 20;
    
    tens = input / 10;
    input = input - tens * 10;

    fives = input / 5;
    input = input - fives * 5;

    ones = input;
    
    printf("Twentys: %d\nTens: %d\nFives:%d\nOnes:%d\n", twentys, tens, fives, ones);

}