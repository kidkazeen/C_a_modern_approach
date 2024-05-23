#include <stdio.h>

int main(void)
{
    int input_hour;
    int input_min;
    
    printf("Enter a 24-hour time(HH:MM): ");
    scanf("%d:%d", &input_hour, &input_min);

    if(input_hour > 0 && input_hour < 12)
    {
        printf("%d:%.2d AM\n", input_hour, input_min);
    }
    else if(input_hour == 12)
    {
        printf("%d:%.2d PM\n", input_hour, input_min);
    }
    else if(input_hour > 12 && input_hour < 24)
    {
        input_hour = input_hour - 12;
        printf("%d:%.2d PM\n", input_hour, input_min);   
    }
    else if(input_hour == 24 || input_hour == 0)
    {
        input_hour = 12;
        printf("%d:%.2d AM\n", input_hour, input_min);
    }
    else
    {
        printf("Invalid Time Entered\n");
    }

}