#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the length of the array \n");
    scanf("%d" ,&n);
    int a[n];
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int seen[10]={0};
    printf("The unique numbers of the array:");
   for(int i=0;i<n;i++)
    {
        if(seen[a[i]]==0)
        {
            printf("%d ",a[i]);
        }
        seen[a[i]]=1;
    }

    return 0;
}
