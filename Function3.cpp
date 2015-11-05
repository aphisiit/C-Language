#include<stdio.h>
int pythagoras(int a,int b,int c)
{
	int pytha;
	if(c*c == (a*a)+(b*b))
		pytha = 1;
	else 
		pytha = 0;
		
	return pytha;		
}
int main()
{
	int a,b,c;
	printf("Enter number for a, b and c : ");
	scanf("%d %d %d",&a,&b,&c);
	int pytha = pythagoras(a,b,c);
	if(pytha == 1)
		printf("%d = %d : is a Pythagoras",c*c,(a*a)+(b*b));
	else
		printf("%d != %d : is not a Pythagoras",c*c,(a*a)+(b*b));
}
