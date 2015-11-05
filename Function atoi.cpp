#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  main()
{
	int n,sum = 0,i,j=0;
	char mark[] = "20*18*20*20*8";
	char temp[3];
	
	for(i = 0; i < strlen(mark) ; i++)
	{
		if(mark[i] != '*')
			temp[j++] = mark[i];
		else
		{
			temp[j] = '\0';
			n = atoi(temp);
			sum = sum + n;	
			j=0;
		}
	}
	temp[j] = '\0';
	sum = sum + atoi(temp);
	printf("%d\n",sum);

	return 0;
}

