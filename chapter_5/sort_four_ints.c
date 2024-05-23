#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int small_1, small_2, large_1, large_2;

    printf("Input 4 numbers separated by spaces: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //finds the smallest and largest of first half
    if(a > b)
    {
        large_1 = a;
        small_1 = b;
    }
    else
    {
        large_1 = b;
        small_1 = a;
    }
    
    //finds the smalles and largest of second half
    if(c > d)
    {
        large_2 = c;
        small_2 = d;
    }
    else
    {
        large_2 = d;
        small_2 = c;
    }

    //prints the largest of the two large ints
    if(large_1 > large_2)
    {
        printf("Largest: %d\n", large_1);
    }
    else
    {
        printf("Largest: %d\n", large_2);
    }

    //prints the smallest of the two small ints
    if(small_1 < small_2)
    {
        printf("Smallest: %d\n", small_1);
    }
    else
    {
        printf("Smallest: %d\n", small_2);
    }
}