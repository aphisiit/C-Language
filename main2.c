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
}data;
int main()
{
	FILE *fptr;
	fptr = fopen("student.bin","wb");
	data std[3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("Member %d\n",i+1);
		printf("Enter name : ");
		scanf("%[^\n]",std[i].name);
		fflush(stdin);
		printf("Enter tel. number : ");
		scanf("%s",std[i].tel);
		fflush(stdin);
	}
	for(j=0;j<3;j++)
	{
		fprintf(fptr,"Member %d\n",j+1);
		fprintf(fptr,"Name : %s\n",std[i].name);
		fprintf(fptr,"Tel. number : %s\n",std[i].tel);
	}
	fclose(fptr);
	return (0);
}

