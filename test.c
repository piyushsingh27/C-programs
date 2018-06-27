#define MAX 30
#define SIZE 10

#include<stdio.h>
#include<string.h>

typedef 
{
   nearest_air[]
    	
}ctgry;
*/

typedef struct
{
	char place_name[MAX];
	char country_name[MAX];
	char category[MAX];
	
}c_name;


void places_func(c_name []);
 
int main()
{
	c_name places[SIZE];
	int index;
	
	places_func(places);
	
}


void places_func(c_name plces[])
{
	int index;
	for(index=0;index<SIZE;index+=1)
	{
		printf("Place name:");
		scanf("%s",plces[index].place_name);
		
		printf("Country name:");
		scanf("%s",plces[index].country_name);
		
		printf("Category:");
		scanf("%s",plces[index].category);
		if()
	}
	
	
}
