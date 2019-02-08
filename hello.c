#include <stdio.h>
int main(void)
{
	int a,i;
	char c[10]="Hello";
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("%s\n",c);
	}
	return 0;
}
