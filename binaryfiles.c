#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 30

typedef struct
{
	char book_name[MAX];
	int year_publish;
	char publisher[MAX];
	int book_price;
} books;

main()
{
	
	books book1;
	FILE *fptr;
	
	fptr = fopen("bin","wb+");
	
	printf("\n Name:");
	scanf("%s" ,book1.book_name);
	printf("\n price:");
	scanf("%d",&book1.book_price);
	printf("\n publisher:");
	scanf("%s",book1.publisher);
	printf("\n year of publish");
	scanf("%d",&book1.year_publish);
	
	
	 fwrite(&book1,sizeof(books),2,fptr);
	 
	fread(&book1,sizeof(books),1,fptr);
	
	
	 
	printf("\n");
    printf("Name : %s",book1.book_name);
    printf("\n");
	printf("Price : %d",book1.book_price);
	printf("\n");
	printf("Publisher : %s",book1.publisher);
	printf("\n");
	printf("Year of publish : %d",book1.year_publish);  
	printf("\n");
	

	fclose(fptr);
}
