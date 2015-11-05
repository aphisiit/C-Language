#include<stdio.h>
int main()
{
	int n[5] = {15,12,3,55,42};
	float Sum = 0, Average = 0;
	int *pn,i;
	pn = &n[0];
	for(i=0;i<5;i++)
	{
		Sum += *(pn+i);
	}
	Average = Sum / 5 ;
	printf("Sum = %f",Sum);
	printf("\nAverage = %f",Average);
	
	return 0;
}
