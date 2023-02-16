#include <stdio.h>
int main()
{
	int n,m1,m2,m3,sum;
    printf("Any number\n");
    scanf("%d",&n);
    
    m1=n/10;
    
    //NOTE- '%' (modulus) produces a remainder for the integer division
    
    // here, we did 

    printf("%d\t",m1);
    
    m2=m1/10;
    printf("%d\t",m2);
    
    m3=m2/10;
    printf("%d\t",m3);
    
    sum=m1+m2+m3;
    printf("\nSum of individual is %d",sum);
    
    return 0;
}

