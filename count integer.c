# include <stdio.h>
# include <conio.h>
void main()
{
 int i, tot = 0 ;
 printf("Enter a number: ") ;
 scanf("%d", &i) ;
 while(i > 0)
 {
  tot++ ;
  i = i / 10 ;
 }
 printf("\nThe number of digits is: %d", tot) ;
 getch() ;
}
