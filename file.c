#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char c;
	int i = 0;
	char *str = "BAngalore hululu 123";
	
	
	fptr = fopen("sample","w");
	if(NULL == fptr)
	{
		exit(0);
	}
	while( '\0' != str[i] )
	{
		if(isalpha(str[i]))
		{
			c = toupper(str[i]);
			fputc(c,fptr);
		}
		else
			fputc(str[i],fptr);
			
		i++;
	}
	
	fclose(fptr);
	
	fptr = fopen("sample" , "r");
	
	while(1)
	{
		if(feof(fptr) != 0)
		{
			printf("Break");
			break;
		}
		
		else
		{
			c = fgetc(fptr);
			printf("%c",c);
		}
	}
}
