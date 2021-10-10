/*c program to find the largest number in an array*/

#include <stdio.h>
void main()
{
    int i, smlst, position = 0;
    int arr[5] = {4, 3, 5, 6, 2};
    smlst = arr[0];

    for (i = 1; i < 6; i++)
    {
        if (smlst > arr[i])
        {
            smlst = arr[i];
            position = i;
        }
    }

    printf("Smallest number of array is  %d at %d position ", smlst, position + 1);
}