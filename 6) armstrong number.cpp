#include<stdio.h>
int main()
{
	int n,m1,m2,m3,k1;
	printf("To determine armstrong number\n");
	printf("insert any number\n");
	scanf("%d",&n);
	
	m1=n/100;
	k1=n%100;
	m2=k1/10;
	m3=n%10;
	
	printf("%d\n%d\n%d\n",m1,m2,m3);
	
	if(m1*m1*m1 + m2*m2*m2 + m3*m3*m3 == n){
		printf("IT is armstrong");
	}
	else{
		printf("Not");
	}
	
	
	return 0;
}
