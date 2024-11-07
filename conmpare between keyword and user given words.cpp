#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("enter the keywords");
	scanf("%s",a);
	if (strcmp (a,"int")==0 || strcmp(a,"float")==0)
	{
	
	printf("%s is a valid keywords\n",a);		
}
else{
	printf("%s is not a valid keywords\n",a);
}
	return 0;
}