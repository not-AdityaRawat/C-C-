#include<stdio.h>
int main ()
{
	int i,n,c,a,b;
	
	printf("Enter the number of fibonacci number\n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",a);
		
	}
	return 0;
}
