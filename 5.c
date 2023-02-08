#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[5][5];
    printf("Enter the Elements of 5x5 array \n");
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {

         printf("arr[%d][%d]:",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
     printf("\n");

    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    printf("The sum of the row:");
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
          sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
     printf("The sum of the column:");
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
          sum+=arr[j][i];
        }
        printf("%d ",sum);
        sum=0;
    }
    return 0;
}

