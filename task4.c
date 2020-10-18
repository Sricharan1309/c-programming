#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	printf("ENTER FIRST NAME:\t");
	scanf("%s",&a);
	printf("ENTER LAST NAME: \t");
	scanf("%s",&b);
	strcat(a,b);
	printf("FULL NAME IS :\t");
	printf("%s\t",a);
}
