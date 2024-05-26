/*checks numbers for repeated digits and prints a table showing the occurence of each number*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //array of length 10 that is all 0's
    int digit_seen[10] = {0};
    
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    
    printf("Digit:        ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Occurrences:  ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", digit_seen[i]);
    }
    printf("\n");
}