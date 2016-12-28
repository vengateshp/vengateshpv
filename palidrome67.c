#include <stdio.h>
int main()
{
   int num, i=0, re,result;
   printf("Enter an integer: ");
   scanf("%d", &num);
    result=num;
   while(result!=0)
   {
      re=result%10;
      i=i*10+re;
      result/=10;
   }
   if(i==num)
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
