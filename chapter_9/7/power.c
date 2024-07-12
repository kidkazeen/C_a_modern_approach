#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int exponent, base;
    printf("Please input a number(base): ");
    scanf("%d", &base);
    printf("Please input a number(exponent): ");
    scanf("%d", &exponent);
    printf("%d\n", power(base, exponent));

}

int power(int x, int n)
{
    int result = 1;

    while(n-- > 0)
    {
        result = result * x;
    }

    return result;
}