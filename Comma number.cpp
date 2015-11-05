#include<stdio.h>
int main()
{
	long long int number,revese = 0,i=0,digit = 0,fraction;
	printf("Enter a number : "); scanf("%lld",&number);
		
	while(number != 0)
	{
		revese = revese * 10 + (number % 10);
		digit++;
		number = number / 10;
	}
//	printf("\nDigit = %d\n",digit);
	fraction = digit % 3;
//	printf("fraction = %d\n",fraction);
	while(revese != 0)
	{
		printf("%d",revese % 10);
		if(fraction <= 0) i++;
		fraction--;
		if(fraction == 0) printf(",");
		else if(i % 3 == 0 && (revese / 10 != 0) && fraction <= 0) printf(",");
		revese = revese / 10 ;
	}
}
