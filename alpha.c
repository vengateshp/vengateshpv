#include <stdio.h>
#include <conio.h>

void main()
{
    char c;
    printf("Enter the character:");
    scanf("%s",&c);
    if(c>='a'&& c<='z' || c>='A' && c<='Z')
        printf("Given character is alphabet");
    else
        printf("Given character is not alphabet");
        getch();
}
