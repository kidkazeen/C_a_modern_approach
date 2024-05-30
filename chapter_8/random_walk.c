#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int direction;
    int row = 0;
    int col = 0;
    char tracker = 'A';
    int stuck = 0;

    char board[10][10] = {{'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',},
                          {'.','.','.','.','.','.','.','.','.','.',}};

    board[row][col] = tracker;          //sets postion [0][0] to A
    tracker++;                          //sets tracker to B

    srand((unsigned) time(NULL));       //can make a random start point using rand() %10 for two numbers for row and col

    while(tracker < 91)                //90 = Z 
    {
        direction = rand() % 4;        // 0 = up, 1 = right, 2 = down, 3 = left

        if(direction == 0)              
        {
            if((row) > 0)               
            {
                row -= 1;
                if(board[row][col] == '.')
                {
                    board[row][col] = tracker;
                    tracker++;
                }
                else
                {
                    row += 1;
                    direction = 1;  
                    stuck++;
                }
            }
            else
            {
                direction = 1;
                stuck++;
            }
        }

        if(direction == 1)
        {
            if(col < 9)  
            {
                col += 1;
                if(board[row][col] == '.')
                {
                    board[row][col] = tracker;
                    tracker++;
                }
                else
                {
                    col -= 1;
                    direction = 2;
                    stuck++;
                }
            }
            else
            {
                direction = 2;
                stuck++;
            }
        }

        if(direction == 2)
        {
            if(row < 9)
            {
                row += 1;
                if(board[row][col] == '.')
                {
                    board[row][col] = tracker;
                    tracker++;
                }
                else
                {
                    row -= 1;
                    direction = 3;
                    stuck++;
                }
            }
            else
            {
                direction = 3;
                stuck++;
            }
        }

        if(direction == 3)              
        {
            if((col) > 0)               
            {
                col -= 1;
                if(board[row][col] == '.')
                {
                    board[row][col] = tracker;
                    tracker++;
                }
                else
                {
                    col += 1;
                    stuck++;             
                }
            }
            else
            {
                stuck++;
            }
        }
        
        //100 stucks prevents calling this series of ifs unecessarily(4 directions times 25 letters = 100)
        if(stuck > 100)
        {
            //top left corner
            if(row == 0 && col == 0 && board[row][col + 1] != '.' && board[row + 1][col] != '.')
            {
                break;
            }
            //left edge
            else if(row > 0 && row < 9 && col == 0 && board[row - 1][col] != '.' && board[row][col + 1] != '.' && board[row + 1][col] != '.')
            {
                break;
            }
            //bottom left corner
            else if(row == 9 && col == 0 && board[row - 1][col] != '.' && board[row][col + 1] != '.')
            {
                break;
            }
            //bottom edge
            else if(row == 9 && col > 0 && col < 9 && board[row][col - 1] != '.' && board[row - 1][col] && board[row][col + 1])
            {
                break;
            }
            //bottom right corner
            else if(row == 9 && col == 9 && board[row][col - 1] != '.' && board[row - 1][col] != '.')
            {
                break;
            }
            //right edge
            else if(row < 9 && row > 0 && col == 9 && board[row + 1][col] != '.' && board[row][col - 1] != '.' && board[row - 1][col] != '.')
            {
                break;
            }
            //top right corner
            else if(row == 0 && col == 9 && board[row + 1][col] != '.' && board[row][col - 1] != '.')
            {
                break;
            }
            //top edge
            else if(row == 0 && col > 0 && col < 9 && board[row][col + 1] != '.' && board[row + 1][col] != '.' && board[row][col - 1] != '.')
            {
                break;
            }
            //stuck between 4 non '.' chars
            else if(board[row - 1][col] != '.' && board[row][col + 1] != '.' && board[row + 1][col] != '.' && board[row][col - 1] != '.')
            {
                break;
            }
        }
    }

    //prints board after completion of walk
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}