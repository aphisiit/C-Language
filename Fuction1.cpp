#include<stdio.h>
int power(int num1,int num2)
{
	int i=1,sum=1;
	for(i=1;i<=num2;i++)
		sum *= num1;
	return sum; 
}
int main()
{
	int num1,num2;
	printf("Number : ");
	scanf("%d",&num1);
	printf("Power : ");
	scanf("%d",&num2);
	int sum = power(num1,num2);
	printf("%d^%d = %d",num1,num2,sum);
}
