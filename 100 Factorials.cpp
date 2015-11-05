#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,num,result[201],temp,j,k,carry;
	
	printf("Enter a number <1-100> to fine FACTORIALS : ");
	scanf("%d",&num);
	temp = num ;
	
	while(temp != 0)
	{
		result[i++] = temp % 10;
		temp /= 10;
	}
	for(j = num-1 ; j >=1 ; j--)
	{
		carry = 0;
		for(k = 0 ; k < i ; k++)
		{
			temp = result[k];
			result[k] = (result[k] * j + carry) % 10 ;
			carry = (temp * j + carry) / 10 ;
		}
		while(carry != 0)
		{
			result[i++] = carry % 10 ;
			carry /= 10 ;
		}
	}
	for(k = i - 1 ; k >= 0 ; k--)
		printf("%d",result[k]);
		
	return 0;
}

