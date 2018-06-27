#define MAX 80

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[MAX];
	FILE *fptr;
	int i,n;
	char *ptr;
	
	fptr = fopen("sample","w");
		if(NULL == fptr)
	{
		exit(0);
	}
	
	for(i=0;i<5;i+=1)
	{
		memset(str,MAX,0);
		
		ptr = fgets(str,MAX,stdin);
		if(NULL==ptr)
		{
			break;
		}
	/*	n = strlen(str);
	   if('\n' == str[n-1])
		
			str[n-1] = '\0';
			
	   */
	   
	   fprintf(fptr,"%s",str);
	}
	
	fclose(fptr);
	
	fptr = fopen("sample","r");
	if(NULL == fptr)
	{
		printf("Not opened");
		exit(0);
	}
	
	while(1)
	{
	memset(str,MAX,0);
	
	/*ptr = fgets(str,MAX,fptr);
	
	if(NULL == ptr)
	{
		printf("fgets failed");
		break;
	}
   */
   
    fscanf(fptr,"%s",str);
    if(feof(fptr))
    {
    	break;
	}
    //fgets(str,MAX,fptr);
   
	printf("%s",str);
}
	fclose(fptr);

	
	return 0;
}
