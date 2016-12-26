# include <stdio.h>
# include <conio.h>
void main()
{
 double b,e,r;
 printf("Enter the base number:");
 scanf("%lf",&b);
 printf("Enter the exponent:");
 scanf("%lf",&e);
 r=pow(b,e);
 printf(".lf^%.llf=%.2lf",b,e,r);
 getch();

}
