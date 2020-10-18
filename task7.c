#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int length,flag=0,i;
	printf("ENTER A STRING TO CHECK WHEATHER IT IS A PALINDROME OR NOT??\n");
	scanf("%s",a);
	length =strlen(a);
	for(i=0;i<length;i++)
	{
		if(a[i]!=a[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{	
		printf("%s\tis not a palindrome.",a);
	}
	else
	{
				printf("%s\tis a palindrome.",a);
	}
	
	
}
