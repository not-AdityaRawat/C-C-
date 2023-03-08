#include<stdio.h>
int rec(int); //'rec' means recursion
int main()

{
	int n,fact;
	printf("Enter a number\n");
	scanf("%d",&n);
	fact=rec(n);
	printf("\n%d",fact);
	
	
}

int rec(int t)     //taking any number 't'
{

	if(t==1||t==0)  //if t=0/1 the function will return 1
	{
		
		return (1);
	}
	else{
		t=t*rec(t-1);  //here function will repeat itself
		return (t);
	}
    
}
    
    

