#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0;
	printf("\nenter a number \n");
	scanf("%d",&n);
	r=prime(n);
	if(r==0)
	printf("\n %d is prime number\n",n);
	else
	printf("\n %d is not a prime number\n",n);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
		continue;
		else
		return 1;
	}
	return 0;
}
