#include<stdio.h>
main()
{	int n,i,j,temp;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE ELEMENTS IN THE ARRAY\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=1;i<n-1;i++)	
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[i]>a[j])
			{
				a[i]=temp;
				a[j]=a[i];
				temp=a[j];
			}
		}
	}
	printf("largest number is %d",a[n-1]);
	printf("samllest  number is %d",a[0]);
}
