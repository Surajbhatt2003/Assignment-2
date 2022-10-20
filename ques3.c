#include <stdio.h>

int main()
{   int a,b,temp;
    printf("Enter any two number a and b\n");
    scanf("%d %d",&a,&b);
    printf("Two numbers a and b are %d ,%d\n",a,b);

       temp = a;
       a= b;
       b=temp;

    printf("After swapping a and b are : \n  %d and %d respectively",a,b);

 
    return 0;
}
