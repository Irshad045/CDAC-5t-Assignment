#include<stdio.h>
#include<conio.h>
int cal();
int main()
{
	int n,v;
	printf("enter a number: ");
	scanf("%d",&n);
	v=cal(n);
	printf("\nthe result is %d ",v);
}
int cal(int x)
{
	int i,y=1;
	for(i=1;i<=x;i++)
	y=y*i;
	
	return y;
}
