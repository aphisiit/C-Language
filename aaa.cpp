#include<stdio.h>
#include<string.h>
int main()
{
	char str3[30],str1[10] = "Thailand",str2[10] = "Bangkok";
	strcat(str3,str2); strcat(str3,"-----"); strcat(str3,str1);
	printf("%s",str3);
	
	return 0;
}
