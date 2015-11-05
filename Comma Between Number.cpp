#include<stdio.h>
int main()
{
	long long int i,num,revese = 0,digit;
	int count=0,max,check;
	
	printf("Enter a number : "); scanf("%lld",&num);
	while(num!=0)
	{
		revese = revese * 10 + (num%10) ;
		count++;
		num /= 10;
	}
	printf("%lld\n\n",revese);
	max = count; i = 0;
	if(count%3 == 0) 
	{
		while(revese > 0)
		{
		digit = 0;
		digit = digit * 10 + (revese % 10);
		printf("%d",digit);
		i++;
		if(i == max)break;
		else if(i % 3 == 0)
			printf(",");
		count -= 3;
		revese /= 10;
		}	
	}
	else
	{
		check = (max%3 );
		while(check > 0)
		{
			digit = 0;
			digit = digit * 10 + (revese % 10);
			printf("%d",digit);
			check--;
			revese /= 10;
		}
		printf(",");
	
		while(revese > 0)
		{
			digit = 0;
			digit = digit * 10 + (revese % 10);
			printf("%d",digit);
			i++;
			if(i == max-max%3)break;
			else if(i % 3 == 0)
				printf(",");
			count -= 3;
			revese /= 10;
		}
	}
	printf("\n\ncheck = %d",check);
}

// 12,345

