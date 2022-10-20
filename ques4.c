#include <stdio.h>

int main()
{   int a,b;
    printf("Enter any two number a and b\n");
    scanf("%d %d",&a,&b);
    printf("Two numbers a and b are %d ,%d\n",a,b);

       a= a+b;
       b= a-b;
       a= a-b;

    printf("After swapping a and b are : \n  %d and %d respectively",a,b);

 
    return 0;
}
