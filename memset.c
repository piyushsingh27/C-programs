#include<stdio.h>
#include<stdlib.h>

main()
{
	char str[50] = "My name is Piyush Singh";
	
	/* String that was entered before memset*/
	printf("\n Before memset");
	fprintf(stdout,"%s",str);
	
	/* this changes values of the characters of the string from the 13th index value */
	memset(str+13,'a',5);
	
	
	printf("\n After memset");
	fprintf(stdout,"%s",str);
	
	
	
}
