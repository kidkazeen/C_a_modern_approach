#include <stdio.h>

int main(void)
{
    int grade;
    int tens, ones;
    printf("Enter numerical grade: ")
    scanf("%d", &grade);

    if(grade < 0 || grade > 100)
    {
        printf("Invalid Grade Entered");
    }
    else
    {
        switch(grade) {
            case 1:  printf("F");
                     break;
            case 2:  printf("D");
                     break;
            default: printf("A");
                     break;
        }
    }
}