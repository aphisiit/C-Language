/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2014 sut <sut@sut-mde>
 * 
 */

#include <stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr = fopen("data.txt","wt");

	printf("Input a string : ");
	fflush(stdin);
	scanf("%[^\n]",str);

	int i; 	

	for(i=0;str[i] != '\0';i++)
	{
		if(islower(str[i]))
		{
			str[i] = toupper(str[i]);
			fprintf(fptr,"%c",str[i]);
		}
		else if(isupper(str[i]))
		{
			str[i] = tolower(str[i]);
			fprintf(fptr,"%c",str[i]);
		}
		else fprintf(fptr,"%c",'*');
	}
	fclose(fptr);
		
	return (0);
}

