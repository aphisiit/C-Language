#include<stdio.h>
int revese(int);
int ispalindrome(int,int);
int main()
{
	int number,reVese;
	printf("Enter a number to check palindrome : ");
	scanf("%d",&number);
	
	reVese = revese(number);
	//printf("Revese = %d",reVese);
	
	if(ispalindrome(number,reVese))
	{
		if()
	}
	else
		printf("IS NOT PALINDROME");
	return 0;
}
int revese(int num)
{
	int revese = 0;
	while(num != 0)
	{
		revese = revese * 10 + num % 10;
		num = num / 10;
	}
	return(revese);
}
int ispalindrome(int num1,int num2)
{
	
	return (num1 == num2);
}
