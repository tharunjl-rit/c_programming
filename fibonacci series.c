#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("The term %d in the Fibonacci series is %d ",n,fibo(n));
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1||n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
