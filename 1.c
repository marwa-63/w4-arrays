#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6];
    int n ,s;
    printf("Enter the elements of the array:\n");
    for(int i=0;i<6;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&a[i]);
    }
printf("Array before sorting:\n");
  for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
   printf("Enter 0 for ascending or Enter 1 for descending:\n");
   scanf("%d",&n);
   if(n==0)
   {
       for(int i=0;i<6;i++)
       {
           for(int j=i+1;j<6;j++)
           {
               if(a[i]>a[j])
               {
                  s=a[i];
                  a[i]=a[j];
                  a[j]=s;
               }
           }
       }
       printf("after sorting:\n");
       for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
   }
    if(n==1)
   {
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
       printf("after sorting:\n");
       for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
   }
    return 0;
}
