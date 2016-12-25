#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("A is big number");
    if(b>=a && b>=c)
        printf("B is big number");
    if(c>=a && c>b)
        printf("C is big number");
    getch();
}
