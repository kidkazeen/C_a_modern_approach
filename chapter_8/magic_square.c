#include <stdio.h>

int main(void)
{
    int size = 0;
    while(size < 1 || size > 99)
    {
        printf("Number must be odd and between 1 and 99\n");
        printf("Enter number: ");
        scanf("%d", &size);
        if(size % 2 == 0 || size < 1 || size > 99)
        {
            printf("Enter a valid number\n");
            return 0;
        }
    }
    
    int magicsquare[size][size];
    
    //initialize square to all 0
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            magicsquare[i][j] = 0; 
        }
    }

    int num = 1;
    int row = 0;
    int col = size/2;   //starting point
    magicsquare[row][col] = num++;
    
    while(num <= size*size)
    {
        //top row and not at the last column
        if(row == 0 && col != (size -1))
        {
            row = (size - 1);
            col++;
            if(magicsquare[row][col] != 0 && col != (size - 1))
            {
                col++;
            }
            else if(magicsquare[row][col] != 0 && col == (size - 1))
            {
                col = 0;
            }
            magicsquare[row][col] = num;

        }
        //top row at last column
        else if(row == 0 && col == (size - 1))
        {
            row = (size - 1);
            col = 0;
            if(magicsquare[row][col] != 0)
            {
                col++;
            }
            magicsquare[row][col] = num;
        }
        //not at top row or last col
        else if(row != 0 && col != (size - 1))
        {
            row--;
            col++;
            if(magicsquare[row][col] != 0 && col != (size -1) && row != 0)
            {
                col++;
            }
            else if(magicsquare[row][col] != 0 && col == (size - 1) && row != 0)
            {
                col = 0;
            }
            else if(magicsquare[row][col] != 0 && col != (size - 1) && row == 0)
            {
                col ++;
            }
            else if(magicsquare[row][col] != 0 && col == (size - 1) && row == 0)
            {
                col = 0;
                row =(size - 1);
                if(magicsquare[row][col] != 0)
                {
                    col++;
                }
            }
            magicsquare[row][col] = num;
        }
        //not at top row but at last col
        else if(row != 0 && col == (size - 1))
        {
            row --;
            col = 0;
            if(magicsquare[row][col] != 0)
            {
                col++;
            }
            magicsquare[row][col] = num;  
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    num++;
    }

    //print square
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d", magicsquare[i][j]);  
            printf("|");    
        }
        printf("\n");
    }
}