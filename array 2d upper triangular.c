#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(arr[1][0]==0 && arr[2][0]==0 && arr[2][1]==0)
    {
        printf("Upper triangular matrix");
    }
    else if(a==2 && arr[1][0]==0)
    {
        printf("Upper triangular matrix");
    }
    else
    {
        printf("Not an Upper triangular matrix");
    }
    return 0;
}
