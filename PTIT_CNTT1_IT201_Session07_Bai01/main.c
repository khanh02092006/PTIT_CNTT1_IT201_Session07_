#include <stdio.h>
#include <stdlib.h>
void sapxepnoibot(int *arr, int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(void)
{
    int n;
    do
    {
        printf(" nhap so phan tu tu 1-1000 ");
        scanf("%d", &n);
        if (n<=0)
        {
            printf( "khong hop le");

        }
    } while (n<=0);
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        printf("chua dc cap phat ");
        return 1;
    }
for (int i=0;i<n;i++)
{
    printf(" nhap phan tu thu%d",i+1);
    scanf("%d", &arr[i]);
}
    sapxepnoibot(arr,n);
    for (int i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }
free(arr);
    return 0;
}
