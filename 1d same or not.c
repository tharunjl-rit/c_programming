#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s1,s2,sum1=0,sum2=0;
    scanf("%d",&s1);
    scanf("%d",&s2);
    int a1[s1],a2[s2];
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&a1[i]);
        sum1=sum1+a1[i];
    }
    for(int j=0;j<s2;j++)
    {
        scanf("%d",&a2[j]);
        sum2=sum2+a2[j];
    }
   

    if((s1==s2)&&(sum1==sum2))
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
