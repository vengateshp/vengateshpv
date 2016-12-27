#include <stdio.h>
int main()
{
    int a, b, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(b=2; b<=a/2; ++b)
    {
        if(a%b==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);

   }
