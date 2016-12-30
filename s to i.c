#include<stdio.h>
#include<stdlib.h>

int main() {
   int n;
   char marks[3];

   printf("Please Enter Marks : ");
   scanf("%s", marks);

   n = atoi(marks);
   printf("\nMarks : %d", n);

   return (0);
}
