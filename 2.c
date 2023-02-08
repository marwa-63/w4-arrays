#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6];
    int s;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<6;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&a[i]);
    }
  for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
     for(int i=0;i<6;i++)
       {
           for(int j=i+1;j<6;j++)
           {
               if(a[i]<a[j])
               {
                  s=a[i];
                  a[i]=a[j];
                  a[j]=s;
               }
           }
       }
       printf("The second largest element in an array is : %d ",a[1]);

    return 0;
}
