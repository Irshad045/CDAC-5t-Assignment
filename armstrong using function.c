#include<stdio.h>
int p(int, int);
int main()
{
  int n,sum=0,t,rem,d=0;
  printf("Input an integer\n");
  scanf("%d",&n);
  t=n;
  while(t!=0){
    d++;
    t=t/10;
  }
  t=n;
  while(t!=0){
    rem=t%10;
    sum=sum+p(rem,d);
    t=t/10;
  }
  if(n==sum)
    printf("an Armstrong number: %d\n", n);
  else
    printf("isn't an Armstrong number: %d\n", n);
  return 0;
}
int p(int n,int r) {
  int c,j=1;
  for (c=1;c<=r;c++)
    j=j*n;
  return j;
}
