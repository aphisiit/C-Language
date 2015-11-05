/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2014 sut <sut@sut-mde>
 * 
 */

#include <stdio.h>
typedef struct{
	char name[30];
	char tel[15];
}recorde;
int main()
{
	FILE *fptr;
	char str[100];
	recorde data[3];
	int num,i;
	printf("Please select your choice.\n");
	printf("\tPress 1 to open file \"data.text\"\n");
	printf("\tPress 2 to open file \"student.bin\"\n");
	printf("\tPress 3 to exit program !!!\n");
	do{
		printf("Your selection (1-3) : ");
		scanf("%d",&num);
		if(num < 1 || num > 3)
			printf("Invalid number !!!\n");
	}while(num < 1 || num > 3);
	switch(num){
		case 1 : {  fptr = fopen("data.txt","rt");
					printf("Read File \"data.txt\"\n");
					fscanf(fptr,"%s",str);
					printf("%s",str);
				} break;
		case 2 : fptr = fopen("student.bin","rb") ;
				 fread(data,sizeof(data),1,fptr);
				 for(i=0;i<3;i++)
				 {
				 	printf("%s\n%s\n",data[i].name,data[i].tel);
				 }
				 break;
		case 3 : printf("Bye bye...");
					exit(0);
	}
	fclose(fptr);
	return 0;
}

