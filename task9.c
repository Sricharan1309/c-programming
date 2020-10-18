#include<stdio.h>
main()
{
	int num,fact=1;
	printf("ENTER NUMBER TO FIND FACTORIAL:\t");
	scanf("%d",&num);

	if(num>0)
	{
		while(num>0)
		{
			fact=fact*num;
			num--;
		}
		printf("factorial is \t%d",fact);
	}
	else
	{
		printf("factorial of zero is is 1");
	}
}
		
