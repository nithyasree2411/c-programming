#include<stdio.h>
int main(void)
{
	int n,k,i;
	int a[100],sum=0;
	scanf("%d\t%d",&n,&k);
	
	for(i=0;i<k;i++)
	{
		scanf("\n%d\t",&a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
