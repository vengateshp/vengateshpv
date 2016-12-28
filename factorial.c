#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=1;
    printf("Enter the integer:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
        k=k*j;
    printf("%d",k);
}
