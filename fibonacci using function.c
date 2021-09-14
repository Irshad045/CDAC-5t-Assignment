#include<stdio.h>
void fibonacci(int r)
{
   int a=0, b=1, c;
   while (a<=r)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}
int main()
{
   int r;
   printf("Enter range: ");
   scanf("%d", &r);
   printf("The fibonacci series is: \n");
   fibonacci(r);
   return 0;
}
