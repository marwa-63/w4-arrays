#include <stdio.h>
#include <stdlib.h>
int n;
void fun(int arr[])
{
    int seen[10]={0};
    printf("The repeated numbers of the array:");
   for(int i=0;i<n;i++)
    {
        if(seen[arr[i]]==1)
        {
            printf("%d ",arr[i]);
        }
        seen[arr[i]]=1;
    }
}
int main()
{
    printf("Enter the length of the array \n");
    scanf("%d" ,&n);
    int arr[n];
    printf("Enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr);

    return 0;
}
