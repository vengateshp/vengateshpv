#include<stdio.h>

int main() {

   int a,b=2,i,n;
   printf("Enter the limit:");
   scanf("%d",&a);
       for(i=0;i<=a;i++)
   {
       b=i*a;
       printf("%d*%d=%d\n",i,a,b);
   }
}
