#include <stdio.h>
#define N 5
int main(void)
{
    int row, col;
    int a[N][N];
    for(row = 0; row < N; row++)
    {
        printf("Enter row %d: ", row + 1);
        for(col = 0; col < N; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    printf("Row totals: ");
    for(row = 0; row < N; row++)
    {
        int rowsum = 0;
        for(col = 0; col < N; col++)
        {
            rowsum = rowsum + a[row][col];
        }
        printf("%d ", rowsum);
    }
    printf("\n");

    printf("Column totals: ");
    for(col = 0; col < N; col++)
    {
        int colsum = 0;
        for(row = 0; row < N; row++)
        {
            colsum = colsum + a[row][col];
        }
        printf("%d ", colsum);
    }
    printf("\n");

    return 0;
}