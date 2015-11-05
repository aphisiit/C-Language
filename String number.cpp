#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	do{
		printf("Please enter string : ");
		scanf("%s",str);
	}while(!(strlen(str) >= 1 && strlen(str) <= 10000));
	int longest = strlen(str);
	int sum = 0,i;
	for(i = 0 ; i < longest ; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
			sum += (str[i] - '0');
	}
	printf("Sumary of number is : %d",sum);
	return 0;
}
