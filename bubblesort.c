#include<stdio.h>
void main()
{
    int a[200],i,j,temp,n;
    puts("Enter the size of an array\n");
    scanf("%d",&n);

    printf("Enter the elements of your array of size '%d'\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Entered array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    
    for(i=0;i<n-1;i++)//for loop for total passes or rounds(n-1)
    {
        for(j=0;j<n-1;j++)// this inner loop is for comparison,(n-1)comparisons
        {
            if(a[j]>a[j+1])
            {
                //swapping
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted array is:\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }

}