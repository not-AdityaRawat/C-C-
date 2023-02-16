
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("Print any 3 numbers-\n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	
	printf("Sum of a and b is %d\n",sum);
	
	avg=sum/3;
	printf("average is %f\n",avg);
	return 0;
}
