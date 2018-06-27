#define MAX 20
#include<stdio.h>

typedef enum
{
	Beach = 0,
	Hill_Station,
	Zoo,
	Monument
}T_type;

typedef struct
{
	char airport[MAX];
	T_type type;
}T;

typedef struct
{
	float population;
	float area;
}C;

typedef enum
{
	Capital = 0,
	Tourist
}category;

typedef struct
{
	char placename[MAX];
	char country[MAX];
	category c;
	union 
	{
		T t;
		C c;
	}d;
}CIA;




int main()
{
	CIA cdata;
	
	printf("\n Enter placename:");
	scanf("%s",cdata.placename);
	
	printf("\n Enter countryname:");
	scanf("%s",cdata.country);
	
	printf("\n Enter category:");
	scanf("%d",&cdata.c);
	
	printf("\n Enter population:");
	scanf("%f",&cdata.d.c.population);
	
	printf("\n Enter area:");
	scanf("%f",&cdata.d.c.area);
	
	return 0;
}
