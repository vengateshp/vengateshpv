#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   printf("Enter the two intervels:");
   scanf("%d %d",&i,&j);
   for(i=i+1;i<j;i++)
    if(i%2==0)
    printf("%d",i);

}
