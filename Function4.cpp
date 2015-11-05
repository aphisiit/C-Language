#include<stdio.h>
char get_input(void)
{
	char character;
	do{
		printf("Enter a character (A-Z): ");
		fflush(stdin);
		scanf("%c",&character);
	}while(character < 'A' || character > 'Z');
}
int power(int, int);
int main()
{
	char text = get_input();
	int num = text;
	int d1 = text/10;
	int d2 = text%10;
	int sum = power(d1,d2);
	printf("The character is '%c' ans its ASCII value is %d ==> %d and %d\n",text,text,d1,d2);
	printf("%d to  the power of %d = %d",d1,d2,sum);
}
int power(int num1,int num2)
{
	int i=1,sum=1;
	while(i<=num2)
	{
		sum *= num1;
		i++;
	}
	return sum;
}

