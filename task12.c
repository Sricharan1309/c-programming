#include<stdio.h>
void c2f();
void f2c();
main()
{
	while(1<2)
	{
			int choice=0;
		printf("ENTER CHOICE\n1.CELCIUS --> FAHRENHEIT\n2.FAHRENHEIT --> CELSIUS\n3.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
					c2f();
					break;
			case 2:
				f2c();
				break;
			case 3:
				exit(0);
				break;
		}
}
	
}
void c2f()
{
	float cel,far;
	printf("ENTER DEGREES IN CELCISUS\t");
	scanf("%f",&cel);
	far=(cel*1.8)+32;
	printf("DEGREES IN FAHRENHEIT IS %f\n",far);
	printf("--------------------------------------------------\n");
}
void f2c()
{
	float cel,far;
	printf("ENTER DEGREES IN FAHRENHEIT\t");
	scanf("%f",&far);
	cel=(far-32)/1.8;
	printf("DEGREES IN CELCISUS ID %f\n",cel);
		printf("--------------------------------------------------\n");
}
