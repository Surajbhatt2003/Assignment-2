#include <stdio.h>

int main()
{   int a,b;
    printf("Enter any number\n");
    scanf("%d",&a);

    b= a/10;
    printf("\n Number %d without last digit is: %d",a,b);

    
    return 0;
}
