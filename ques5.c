#include <stdio.h>

int main()
{   int a,b,c,d,e,sum;
    printf("Enter 3 digit  number");
    scanf("%d",&a);
    
    b= a%100;
    c= a/100;
    d= b%10;
    e= b/10;
    sum= c+d+e;
    printf("sum of %d is: %d",a,sum);
    return 0;
}