 #include <stdio.h>

int main()
{            int a,num,b,reverse;
    printf(" enter 3 digit number");
 scanf("%d",&a);
     reverse = a%10;
     b = a/10;
     num= reverse*100 +b;
 
  printf("  right sifting  is: %d",num);
    return 0;
}

