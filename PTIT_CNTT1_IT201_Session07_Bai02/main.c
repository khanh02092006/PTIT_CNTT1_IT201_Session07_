#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
int temp=*a;
    *a=*b;
    *b=temp;
}
void sapxepluachon(int *arr, int n)
{
   for (int i=0;i<n;i++)
   {
       int minindexx=i;
       for (int j=i+1;j<n;j++)
       {
           if (arr[j]<arr[minindexx])
           {
               minindexx=j;
           }
       }
       if (minindexx!=i)
       {
           swap(&arr[i],&arr[minindexx]);
       }
   }
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so luong phan tu tu 1-1000");
        scanf("%d", &n);
        if(n < 1 || n > 1000)
        {
            printf(" khong hop le");

        }
    } while(n < 1 || n > 1000);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat ");
        return  1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu 5d ",i+1);
        scanf("%d", &arr[i]);
    }
 sapxepluachon(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
