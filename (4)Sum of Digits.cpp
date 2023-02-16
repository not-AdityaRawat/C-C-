// C program to find sum of individual digits in 3-digit number
#include <stdio.h>

int main()
{
	int n, m1,m2,m3;
	
	printf("Enter a 3 digit number-");
	scanf("%d",&n);
	m1=n%10;
	
	printf("modulus is %d",m1);
	m2=m1%10;
	printf("modulus is %d",m2);
	m3=m2%10;
	printf("modulus is %d",m3);

	return 0;
}

