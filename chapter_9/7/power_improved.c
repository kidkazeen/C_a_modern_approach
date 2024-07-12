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
    
    //even  //x^n == (x^n/2)^2
    if(n % 2 == 0)
    {   
        if(n == 0)
        {
            return 1;
        }
        else
        {
            result = power(x,(n/2)) * power(x,(n/2));
        }

        return result;
    }

    //odd  //x^n == x * x^(n-1)
    else
    {
        result = x * power(x, (n - 1));
        return result;
    }
}