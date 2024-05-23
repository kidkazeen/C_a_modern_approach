#include <stdio.h>

int main(void)
{
    float input = 0.0f;
    printf("Enter an amount: ");
    scanf("%f", &input);
    printf("With 5 Percent Added: %.02f\n", (input * 0.05) + input);
    return 0;
}