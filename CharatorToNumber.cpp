#include<stdio.h>
int main()
{
	char x[5],*px;
	int i;
	px = x;
	for(i=0;i<5;i++)
	{
		printf("Enter a number %d : ",i+1);
		scanf("%c",(px+i));
		fflush(stdin);
	}
	//px = x;
	for(i=0;i<5;i++)
	{
		printf("number %d is %c and address is %p\n",i+1,*px,px);
		px++;
	}
	return 0;
}
