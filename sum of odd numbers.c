#include<stdio.h>
int sumofodd(int arr[], int n)
{
    static int sum=0;
    int i;
    if(n>0)
    {
        i=n-1;
        if(arr[i]%2==1)
        sum=sum+arr[i];
        sumofodd(arr,i);
    }
return sum;
}
int main()
{
    int n,j;
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("Sum = %d",sumofodd(arr,n));
}
