#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    printf("Enter the character:");
    scanf("%s",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        printf("Given character is vowel");
    else
        printf("Given character is constant");
        getch();
}
