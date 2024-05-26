/*checks numbers for repeated digits and lists the repeated digits*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //array of length 10 that is all 0's
    int digit_seen[10] = {0};
    int repeated_digits[10] = {0};
    
    int digit;
    long n;
    
    bool repeats;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;

        if(digit_seen[digit] > 1)
        {
            repeated_digits[digit] = 1;
            repeats = true;
        }
    }

    if(repeats == true)
    {
        printf("Repeated digit(s): ");
        for(int j = 0; j < 10; j++)
        {
            if(repeated_digits[j] == 1)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("No repeated digits\n");
        return 0;
    }
}