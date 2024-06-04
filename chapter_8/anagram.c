#include <stdio.h>

int main(void)
{
    char c;
    int letters[26] = {0};
    int anagram = 0;

    printf("Enter first word: ");
    while((c = getchar()) != '\n')
    {
        if(c >= 65 && c <= 122)
        {
            if(c >= 65 && c <= 91)      //uppercase
            {
                c = c - 65;
                letters[c] += 1;
            }
            if(c >= 97 && c <= 122)     //lowercase
            {
                c = c - 97;
                letters[c] += 1;
            }
        }
    }

    printf("Enter second word: ");
    while((c = getchar()) != '\n')
    {
        if(c >= 65 && c <= 122)
        {
            if(c >= 65 && c <= 91)      //uppercase
            {
                c = c - 65;
                letters[c] -= 1;
            }
            if(c >= 97 && c <= 122)     //lowercase
            {
                c = c - 97;
                letters[c] -= 1;
            }
        }
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(letters[i] == 0)
        {
            anagram += 1;
        }
    }
    if(anagram == 26)
    {
        printf("These two words are anagrams\n");
    }
    else
    {
        printf("These two words are NOT anagrams\n");
    }
}
