#include<stdio.h>

main()
{
	char *str = "Anurag bhadwa hai";
	char *first, *second, *third;
	
	sscanf(str,"%s %s %s",first,second,third);
	
	sprintf(str,"%s %s %s",first,second,third);
}
