#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j=1;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        j=j*i;
    printf("factorial is:%d",j);
    getch();

}
