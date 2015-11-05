//INput 	123456789012345678901234567890
//										11
//			------------------------------	
//OUTPUT	123456789012345678901234567901						
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char number1[100],number2[100];
	int mnumber1[101] = {0},mnumber2[101] = {0},mnumber3[101] = {0};
	int indexnumber1,indexnumber2,indexnumber3;
	int i,max,carry;
	
	scanf("%s",number1);
	scanf("%s",number2);
	
	int length1 = strlen(number1);
	int length2 = strlen(number2);
	
	indexnumber1 = indexnumber2 = indexnumber3 = 0;
	
	for(i = strlen(number1)-1;i >= 0; i--)
		mnumber1[indexnumber1++] = number1[i] - '0';
		
	for(i = strlen(number2)-1;i >= 0; i--)
		mnumber2[indexnumber2++] = number2[i] - '0';
		
	max = strlen(number1) > strlen(number2) ? strlen(number1) : strlen(number2) ;
	
	carry = 0;
	for(i = 0; i < max ; i++){
		mnumber3[i] = (mnumber1[i] + mnumber2[i] + carry) % 10 ;
		//printf("%d",mnumber2[i]); system("pause");
		carry = (mnumber1[i] + mnumber2[i] + carry) / 10 ;
	}
	if(carry > 0)
		mnumber3[i++] = 1;
	
	indexnumber3 = i-1;
	for(i = indexnumber3 ; i >= 0 ; i--)
	{
		printf("%d",mnumber3[i]);
	}
}

