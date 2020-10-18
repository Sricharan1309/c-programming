#include<stdio.h>

struct book
{
 char title[50];
 char author[20];
 char genre[15];
};
main()
{
	struct book b1;
	printf("ENTER TITLE OF THE BOOK.\t");
	scanf("%s",b1.title);
	printf("ENTER AUTHOR OF THE BOOK.\t");
	scanf("%s",b1.author);
	printf("ENTER THE GENRE OF THE BOOK.\t");
	scanf("%s",b1.genre);
	display(b1.title,b1.author,b1.genre);
}
void display (char a[], char b[],char c[])
{
	printf("%s\t%s\t%s\t",a,b,c);
}
