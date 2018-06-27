#define MAX 80

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char file_name[MAX];
    char str[MAX];
   // char *ptr;
	memset(file_name,0,MAX);
	FILE *fptr;
	
	printf("\n File name:");
	fgets(file_name,MAX,stdin);
	
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}
	
/*	if(" " == file_name)
	{
		printf("\n Name cannot be NULL");
		exit(0);
	} */
	
	fptr = fopen(file_name,"w");
	
	if(NULL == fptr)
	{
		printf("\n file not opened");
		exit(0);
	}
	
	
//	int fwrite(void *ptr,int n,int nmele,fptr);
	
	
	
	
		
}


