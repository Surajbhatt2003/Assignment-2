#include <stdio.h>

int main()
{    int  a,b,num;
    printf("Enter any number and also enter digit which u want to append\n");
    scanf("%d %d",&a,&b);
     
     num= a*10+b;
    
    printf("%d after adding appended digit %d  is %d ",a,b,num);

    
    return 0;
}
