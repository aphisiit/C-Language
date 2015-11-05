#include<stdio.h>
#include<stdlib.h>
int main()
{
//	int data[100]; we don't use araay but we use memory...
	int n,i,*p;
	
	printf("How many members do you want ? : ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int)); //this is request memory area...
	
	for(i = 0 ; i < n ; i++){
		scanf("%d",p+i); // scanf("%d",&p[i]);
	}
	
	/*	Print out DATA */
	printf("Output\n");
	for(i = 0 ; i < n ; i++){
		printf("%d ", *(p+i)); // printf("%d " ,p[i]);
	}
	free(p); //restore memory area...
	return 0;
}

