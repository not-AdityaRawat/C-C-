#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], rev[100];
	
	printf("Insert any string\n");
	scanf("%s",&str);
	

	strcpy(rev,str);
	strrev(rev);
	if (strcmp(str,rev)==0)
	{
		printf("The string is palindrome");
	}
	else {
		printf("It is not");
	}
	
	
	return 0;
}
