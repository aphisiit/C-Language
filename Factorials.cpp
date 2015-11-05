#include<stdio.h>
int factorials(int);
int main()
{
	int num;
	printf("Enter a number to comput factorials : ");
	scanf("%d",&num);
	printf("Factorials is : %d",factorials(num));
	
	return 0;
}
int factorials(int num)
{
	if(num == 1)
		return 1;
	else
		return num * factorials(num-1);
}
