#include<stdio.h>
#include<conio.h>
void sumAvg(int arr[]);
void main(){
	int ar[5],i;
	printf("enter 3 numbers\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&ar[i]);
	}
	sumAvg(ar);
	getch();
}
void sumAvg(int arr[])
{
	int i,add=0;
float avrg;
for(i=0;i<5;i++)
{
	add=add+arr[i];
}
avrg=add/3;
printf("the sum is %d\n",add);
printf("the avg is %.2f\n",avrg);
}
