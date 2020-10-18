#include<stdio.h>
main()
{ 
	int m1,m2,m3,sum;
	float avg;
	printf("ENTER 3 SUBJECTS MARKS: ");
	scanf("%d,%d,%d",&m1,&m2,&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("SUM = %d\nAVERAGE = %f",sum,avg);
}
