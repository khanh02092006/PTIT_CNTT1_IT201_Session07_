#include <stdio.h>
#include <stdlib.h>
void sapxepchen(int *arr , int n)
{
    for (int i=1;i<n;i++)
    {
        int x=arr[i] ;
        int pos=i-1;
        while (pos>=0 && arr[pos]>x)
        {
            arr[pos+1]=arr[pos];
            --pos;
        }
        arr[pos+1]=x;
    }

}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu tu 1-1000");
        scanf("%d", &n);
        if (n<1 || n>1000)
        {
            printf(" khong hop le");

        }
    } while ( n<1||n>1000);
int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf(" chua duoc cap phat");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu thu %d ", i+1);
        scanf("%d", &arr[i]);

    }
    sapxepchen(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
free(arr);
    return 0;
}
