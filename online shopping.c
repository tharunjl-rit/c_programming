#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    int df,ds,da;
    df=a-(a*b*0.01)+c;
    ds=d-(d*e*0.01)+f;
    da=g-(g*h*0.01)+i;
    /*int tf,ts,ta;
    tf=(a-df)+c;
    ts=(d-ds)+f;
    ta=(g-da)+i;*/
    printf("In Flipkart: Rs.%d\n", df);
    printf("In Snapdeal: Rs.%d\n", ds);
    printf("In Amazon: Rs.%d\n", da);
    if((df<=ds)&&(df<=da)){
       // if((df=ds)||(df=da)){
        printf("Choose Flipkart");
    }
    if((ds<df)&&(ds<da)){
       // if((ds=df)||(ds=da)){
        printf("Choose Snapdeal");
    }
    if((da<=df)&&(da<=ds)){
        printf("Choose Amazon");
    }
    return 0;
}
