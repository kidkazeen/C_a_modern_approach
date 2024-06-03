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
                counter++;   //increment to skip the lower if statement on line 26
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
            if(i != MAX_CHARS - 1)                              //makes sure the calls below do not access outside of input[] range if i = the last array element
            {
            if(input[i] == ' ' && input[i + 1] != ' ' && input[i + 1] != 0)      //if two or more spaces are present it condenses the output to one space between words
            {
                int j = i + 1;
                while(input[j] != ' ' && input[j] != 0)         //prints the current word
                {
                    printf("%c", input[j]);
                    j++;
                }
                
                int k = i;
                while(k > 0)
                {
                    if(input[k] != ' ')                         //prints a space only if there are non spaces left in the array
                    {                                           //if there are only leading spaces it will not print a space because there are no more words to print
                        printf(" ");
                        break;
                    }
                    k--;
                }
            }
            }

            //prints the first word in input last if input[i] is not a ' '
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