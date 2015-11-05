#include<stdio.h>
#include<ctype.h>
char input(void)
{
	char text;
	do{
		printf("Please enter a character : ");
		scanf("%c",&text);
	}while(text < 'a' || text > 'z');
	text = toupper(text);
	return text;
}
int main()
{
	char text = input();
	int i=1;
	while(i<=5)
	{
		printf("%c ",text);
		i++;
	}
}
