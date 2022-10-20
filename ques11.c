#include <stdio.h>

int main()
{    float inr,dol;
    printf("Enter rupees amount\n");
    scanf("%f",&inr);
     
     dol= inr/76.23 ;
    
    printf(" conversion of  %2.2f INR in dollar is: %2.2f USD",inr,dol);

    
    return 0;
}
