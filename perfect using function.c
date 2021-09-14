#include<stdio.h>
int perfect(int);
int main(){
        int n,s;
        printf("enter a number: ");
        scanf("%d",&n);
        s = perfect(n);
        if(s == n)
        printf("\nThe given number %d is a perfect number",n);
        else
        printf("\nThe given number %d is not a perfect number",n);
        getch();
        return 0;
        }
int perfect(int number){
        int a=1, sum=0;
        while(a< number){
        if(number % a == 0)
        sum=sum+a;
        a++;
        }
        return(sum);
        }
