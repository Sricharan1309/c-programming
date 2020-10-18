#include<stdio.h>
main()
{
	float cel,far;
	printf("ENTER THE TEMPERATURE IN CELSIUS:\t");
	scanf("%f",&cel);
	far=(cel*1.8)+32;
	printf("TEMPERATURRE IN FAHRENHEIT IS %f",far);
}
