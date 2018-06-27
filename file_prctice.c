#include<stdio.h>


main()
{
	FILE *fptr;
	fptr = fopen("frrd.txt","w");
	fprintf(fptr,"%s","12345678901");
	fseek(fptr,10,SEEK_SET);
	fprintf(fptr,"%s","Bengaluru");
	printf("%d",ftell(fptr));
	
	fseek(fptr,0,SEEK_END);
	printf("%d",ftell(fptr));
	
	rewind(fptr);
	printf("%d",ftell(fptr));
	
	fseek(fptr,-5,SEEK_SET);
	printf("%d",ftell(fptr));
	
	
	fclose(fptr);
}
