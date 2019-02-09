#include<stdio.h>
int main(void)
{
	int n,r,sum,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=r;
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
