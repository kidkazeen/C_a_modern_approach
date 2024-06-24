#include <stdio.h>

void selection_sort(int digits[], int length);
int largest_element_sort(int digits[], int length);
void swap(int digits[], int length, int location);

int main(void)
{
    int length = 0;
    printf("Enter length of array: ");
    scanf("%d", &length);
    int digits[length];

    for(int i = 0; i < length; i++)
    {
        printf("Enter element %d of array: ", i);
        scanf("%d", &digits[i]);
    }

    selection_sort(digits, (length - 1));

    for(int i = 0; i < length; i++)
    {
        printf("%d", digits[i]);
        printf(" ");
    }
    printf("\n");
}

//recursively calls itself until newlength is 0 returned from largest_element_sort
void selection_sort(int digits[], int length)
{
    int newlength;
    newlength = largest_element_sort(digits, length);
    if(newlength <= 0) return;
    selection_sort(digits, newlength);
}

//finds the largest element and its location in the array returns (length - 1) && calls swap
int largest_element_sort(int digits[], int length)
{
    int largest = digits[0];
    int location = 0;
    
    for(int i = 1; i <= length; i++)
    {
        if(largest < digits[i])
        {
            largest = digits[i];
            location = i;
        }
    }
    swap(digits, length, location);
    return --length;
}

//swaps element at int location with the last element in the array of length argument
void swap(int digits[], int length, int location)
{
    //if location == length the largest element is already at end of array of length argument
    if(location != length)
    {
        //temp = last element
        int temp = digits[length];

        //swaps 
        digits[length] = digits[location];
        digits[location] = temp;
    }
}