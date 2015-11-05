#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main()
{
	int x[] = {3,7,4,8,12,2,14};
	int length = sizeof(x) / sizeof(int);
	int i,j,sum,y[length],k;
	
	for(i = 1 ; i <= (int)pow(2,length) ; i++)
	{
		k = 0;
		sum = 0;
		for(j = 0 ; j < length ; j++)
		{
			if((i & (1 << j)) != 0)	
			{
				sum += x[j];
				y[k++] = x[j];
			//	printf("x[%d] = %d\n",j,x[j]);
			//	getch();
			}
		}
		//printf("sum = %d\n",sum);
		if(sum == 14)
		{
			for(j = 0; j < k ; j++)
				printf("%d ",y[j]);
			printf("\n");
		}
		
	}	
}


