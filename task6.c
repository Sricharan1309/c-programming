#include<stdio.h>
main()
{
	int num,copy,mod,x,y;
	printf("ENTER NUMBER TO CHECK WHEATHER IT ARMSTRONG OR NOT ??\n");
	scanf("%d",&num);
	copy=num;
	while(num>0)
	{
		mod=num%10;
		x=mod*mod*mod;
		y=y+x;
		num=num/10;
	}
	if(y==copy)
	{
		printf("%d\t is an armstrong number.",copy);
	}
	else
	{
			printf("%d\t is not an armstrong number.",copy);	
	}
}
