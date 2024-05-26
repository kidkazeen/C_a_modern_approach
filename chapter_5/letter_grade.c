#include <stdio.h>

int main(void)
{
    //90-100=A  80-89=B  70-79=C  60-69=D  0-59=F
    int grade;
    int tens, ones;
    
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade < 0 || grade > 100)
    {
        printf("Invalid Grade Entered\n");
    }


    else
    {
        //edge case
        if(grade < 10)
        {
            ones = grade % 10;
            tens = 0;
        }
        else 
        {
            ones = grade % 10;
            tens = (grade - ones) / 10;
        }

        switch(tens) {
            case 0:  printf("Letter Grade: F\n");
                     break;
            case 1:  printf("Letter Grade: F\n");
                     break;
            case 2:  printf("Letter Grade: F\n");
                     break;
            case 3:  printf("Letter Grade: F\n");
                     break;
            case 4:  printf("Letter Grade: F\n");
                     break;
            case 5:  printf("Letter Grade: F\n");
                     break;
            case 6:  printf("Letter Grade: D\n");
                     break;
            case 7:  printf("Letter Grade: C\n");
                     break;
            case 8:  printf("Letter Grade: B\n");
                     break;
            case 9:  printf("Letter Grade: A\n");
                     break;
            case 10: printf("Letter Grade: A\n");
                     break;
        }
    }
}