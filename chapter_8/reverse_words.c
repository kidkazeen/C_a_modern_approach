#include <stdio.h>
#define MAX_CHARS 1000

int main(void)
{
    char c;
    int counter = 0;
    char input[MAX_CHARS] = {0}; //initilaizes input to an array of nul chars
    
    while((c = getchar()) != '.' && c != '?' && c != '!')
    {
        if(c != '\n')  //skips enters(new lines) and doesnt put them in array
        {
            if(counter >= MAX_CHARS)
            {
                printf("Input too large\n");
                counter++;   //increment to skip the lower if statement
                break;
            }
            input[counter] = c;
            counter ++;
        }
    }
    //c = ending char(! or ? or .)

    if(counter <= MAX_CHARS)
    {
        for(int i = (counter - 1); i >= 0; i--)
        {
            if(input[i] == ' ' && input[i + 1] != ' ')      //if two or more spaces are present it condenses the output to one space between words
            {
                int j = i + 1;
                while(input[j] != ' ' && input[j] != 0)
                {
                    printf("%c", input[j]);
                    j++;
                }
                printf(" ");
            }
            if(i == 0 && input[i] != ' ')
            {
                int j = i;
                while(input[j] != ' ' && input[j] != 0)
                {
                    printf("%c", input[j]);
                    j++;
                }
            }
        }
        printf("%c", c);
        printf("\n");
    }
}

//prints a space before the terminating char if you start input with any amount of spaces
//prints a space at the very beginning if there is a space between last word and terminating char