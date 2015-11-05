//Fibonasci Series !!!!

#include<stdio.h>
int Fibo(int);
int main()
{
	int num,a,b,c;
	
	printf("Enter a term = ");
	scanf("%d",&num);

	printf("Fibo(%d) = %d",num,Fibo(num));
}
int Fibo(int num)
{
	int a,c,b,temp;
	if(num == 0)
		return 0;
	else if(num == 1 )
		return 1;
	else{
		a = 1;
		b = 0; 
		for(c=2;c<=num;c++)
		{
			temp = b;
			b = a;
			a = a + temp ; 
		}
	}
	return a;
}



