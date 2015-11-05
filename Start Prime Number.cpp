#include<stdio.h>
int main()
{
	int num1,num2,i,j,count,loop=0;
	printf("Enter a number to start : ");
	scanf("%d",&num1);
	printf("How many prime number ? : ");
	scanf("%d",&num2);
	
	for(i = num1 ; i > 0 ; i++)
	{
		count = 0;
		for(j = 1 ; j <= i ; j++)
		{
			if(i % j == 0)
			 	count++;
		}
		if(count == 2)
		{
			printf("%d ",i);
			num2--;
		}
		if(num2 == 0);
		{
			break;
		}
	}
	
	return 0;
}

