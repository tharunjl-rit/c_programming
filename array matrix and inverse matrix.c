#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("Enter the no of rows:",m);
    scanf("%d",&m);
    printf("Enter the no of columns:",n);
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing the elements \n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\n\ntranspose of elements \n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d\t",arr[j][i]);
        }
    }
}
    
