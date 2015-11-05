#include<stdio.h>
void display(int,char);
int main()
{
	int num; char text;
	do{
		printf("Input a number (3-8): ");
		scanf("%d",&num);
		fflush(stdin);
	}while(!(num>=3 && num<=8));
	do{
		printf("Input charater (a-z): ");
		scanf("%c",&text);
		fflush(stdin);
	}while(text<'a' || text>'z');
	display(num,text);
	return 0;
}
void display(int num, char text)
{
	int i,count = num ;
	printf("Output from function display()\n");
	for(i=1;i<=count;i++)
	{
		printf("%d%c ",num,text);
		num += 3; text -= 2;
	}
}
