#include<stdio.h>
int main()
{

    int a,fact=1,n;
    scanf("%d",&a); 

    for(n=1;n<=a;n++)
    {
        fact=fact*n; 
    }
    printf("The factorial of %d is %d",a,fact);
    return 0;

}

