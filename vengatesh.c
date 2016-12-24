#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   printf("Enter the year:");
   scanf("%d",&year);
   if(year%4==0 && year%100==0 && year%400==0)
    printf("Given year is leaf");
   else
    printf("Given year is not leaf");
   getch();
}
