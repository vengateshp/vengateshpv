#include <stdio.h>
#include <conio.h>

int main()
{
   int a,b,c=0;
   printf("Enter the positive number:");
   scanf("%d",&a);
   for(b=1;b<=a;++b)
   {
       c+=b;
   }
   printf("%d",c);
   getch();
}
