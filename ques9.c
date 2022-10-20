#include <stdio.h>

int main()
{    int  a,b,num;
    printf("Enter any number\n");
    scanf("%d",&a);
     b= a/10;
     num= b*10;
    
    printf("%d after removal of last digit to 0 is %d ",a,num);

    
    return 0;
}
