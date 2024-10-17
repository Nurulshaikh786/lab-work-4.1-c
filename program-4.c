#include<stdio.h>

main()
{
float a,b;
printf("Enter the value of a : ");
scanf("%f",&a);
printf("Enter the value of b : ");
scanf("%f",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping the value of variables \n\n");
printf(" Value of a is :\t%.1f\n",a);
printf(" Value of b is :\t%.1f",b);
}
