#include<stdio.h>
main()
{	int num,x,rev=0;
	printf("ENTER A NUMBER:\t");
	scanf("%d",&num);
	while(num>0)
	{
		x=num%10;
		rev=rev*10+x;
		num=num/10;
	}
	printf("%d",rev);
}
