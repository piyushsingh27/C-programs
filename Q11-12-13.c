
#define MAX 20
#define SIZE 10

#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct
{
	char book_name[MAX];
	int year_publish;
	char publisher[MAX];
    //int book_count;
	//int books[SIZE];
	int book_price;
} books;

typedef union
{
    char book_name[MAX];
	int book_price; 	
} books_un;

void fifthbook(books *);
void firstbook(books);
void secondbook(books);
void thirdbook(books);
void fourthbook(books);


int main()
{
	
	printf("===============================================Implementation of structures=============================================");
	printf("\n");
	
	books b5;
	books b1;
    books b2;
    books b3;
    books b4;
    
    books book_array[SIZE];
    
    int index;
    
    int book_count;
    
    printf("\n Count of the books taken by the user:");
    scanf("%d",&book_count);
    
    printf("Array of structures");
    for(index=0;index<book_count;index+=1)
    {
    	printf("\n Book name:");
    	scanf("%s",book_array[index].book_name);
    	
    	printf("\n Book price");
    	scanf("%d",&(book_array[index].book_price));
    	
    	printf("\n Book publisher");
    	scanf("%s",book_array[index].publisher);
    	
    	printf("\n Year published");
    	scanf("%d",&(book_array[index].year_publish));
    	
    	printf("\n");
	}
	
	for(index=0;index<book_count;index+=1)
	{
		printf("\n Book name:");
		printf("%s",book_array[index].book_name);
		printf("\t");
		
		printf("Book price:");
		printf("%d",book_array[index].book_price);
		printf("\t");
		
		printf("Book publisher:");
		printf("%s",book_array[index].publisher);
		printf("\t");
		
		printf("Year published:");
		printf("%d",book_array[index].year_publish);
		printf("\n");
	}
    
    /* Details of the first book taken */
    firstbook(b1);
    
    
    /* Details of the second book taken */
    secondbook(b2);
   
    /* Details of the third book taken */
    thirdbook(b3);
    
    
    
    /* Details of the fourth book taken */
    fourthbook(b4);
    
    
    /* Details of the fifth book taken */
    fifthbook(& b5);
    
    printf("\n\n\n");
    
    /* execution of the union part begins */
    printf("===============================================Implementation of union=================================================");
    books_un b;
    
    printf("\n");
    
    printf("Book name :");
    strcpy(b.book_name,"HRM");
    printf("%s", b.book_name);
    
    printf("\n");
    
    printf("Book price:");
    b.book_price = 170;
    printf("%d", b.book_price);
    
    printf("\n");
    printf("%s", b.book_name); 
    
    printf("\n");
   // printf("%d",b.book_price);
    
    printf("\n");
    
}

void firstbook(books book1)
{
	printf("The corresponding details of the first book");
    printf("\n");
    
    printf("Name:");
    strcpy(book1.book_name, "C Programming");
    printf("%s", book1.book_name);
    
    printf("\n");
    
    printf("Publishing year:");
    book1.year_publish = 2009;
    printf("%d", book1.year_publish);
    
    printf("\n");
    
    printf("Publisher:");
    strcpy(book1.publisher, "Paperback");
    printf("%s", book1.publisher);
    
    printf("\n");
    
    printf("Book price:");
    book1.book_price = 200;
    printf("%d", book1.book_price);
    
    printf("\n");
    printf("\n");
}

void secondbook(books book2)
{
	printf("The corresponding details of the second book");
    printf("\n");
    
    printf("Name:");
    strcpy(book2.book_name, "Digital Logic");
    printf("%s", book2.book_name);
    
    printf("\n");
    
    printf("Publishing year:");
    book2.year_publish = 2008;
    printf("%d", book2.year_publish);
    
    printf("\n");
    
    printf("Publisher:");
    strcpy(book2.publisher, "Kindle");
    printf("%s", book2.publisher);
    
    printf("\n");
    
    printf("Book price:");
    book2.book_price = 240;
    printf("%d", book2.book_price);
    
    printf("\n");
    printf("\n"); 
}

void thirdbook(books book3)
{
	printf("The corresponding details of the third book");
    printf("\n");
    
    printf("Name:");
    strcpy(book3.book_name, "RM");
    printf("%s", book3.book_name);
    
    printf("\n");
    
    printf("Publishing year:");
    book3.year_publish = 2009;
    printf("%d", book3.year_publish);
    
    printf("\n");
    
    printf("Publisher:");
    strcpy(book3.publisher, "Paperback");
    printf("%s", book3.publisher);
    
    printf("\n");
    
    printf("Book price:");
    book3.book_price = 150;
    printf("%d", book3.book_price);
    
    printf("\n");
    printf("\n");
}

void fourthbook(books book4)
{
	printf("The corresponding details of the fourth book");
    printf("\n");
    
    printf("Name:");
    strcpy(book4.book_name, "Web Technology");
    printf("%s", book4.book_name);
    
    printf("\n");
    
    printf("Publishing year:");
    book4.year_publish = 2011;
    printf("%d", book4.year_publish);
    
    printf("\n");
    
    printf("Publisher:");
    strcpy(book4.publisher, "Tata Mcgraw Hill");
    printf("%s", book4.publisher);
    
    printf("\n");
    
    printf("Book price:");
    book4.book_price = 200;
    printf("%d", book4.book_price);
    
    printf("\n");
}

void fifthbook(books *book5)
{
	printf("\n");
	printf("Book Name:");
	strcpy(book5->book_name,"Stats");
	printf("%s",book5->book_name);
	printf("\n");
	
	printf("Publishing year:");
	book5->year_publish = 1999;
	printf("%d",book5->year_publish);
	printf("\n");
	
	printf("Publisher:");
	strcpy(book5->publisher,"Tata Mcgraw Hill");
	printf("%s",book5->publisher);
	printf("\n");
	
	printf("Price");
	book5->book_price= 280;
	printf("%d",book5->book_price);
	printf("\n");
}


