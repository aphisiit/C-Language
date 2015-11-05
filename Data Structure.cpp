#include<stdio.h>
typedef struct{
	char name[30];
	int age;
	char sex;
}record;
int main()
{
	int m = 0,f=0,i=0;
	record data[3];
	//data[0].name[] = "Same";
	data[0].age = 289;
	data[0].sex = 'm';
	//data[1].name[] = "Ann";
	data[1].age = 25;
	data[1].sex = 'f';
	//data[2].name[] = "Dane";
	data[2].age = 33;
	data[2].sex = 'm';
	char *ptr;
//	ptr = &data[0].sex;
	while(i < 3)
	{
		ptr = &data[i].sex;
//		printf("i = %d\n",i);
//		printf("Pointer = %x\n *ptr = %c \n",ptr,*ptr);
		if(*(ptr) == 'f')
			f++;
		else if(*(ptr) == 'm')
			m++;
	//	ptr += 40;
		i++;
	}
	printf("Male = %d\nFemale = %d",m,f);
//	printf("\n\ndata 1 = %c, data 2 = %c, data 3 = %c",data[0].sex,data[1].sex,data[2].sex);
//	printf("\n\n data 1 = %x, data 2 = %x, data 3 = %x",&data[0].sex,&data[1].sex,&data[2].sex);
//	printf("Size of data = %d",sizeof(data[0]));
}
