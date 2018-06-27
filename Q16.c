#define MAX 20
#define SIZE 10

#include<stdio.h>
#include<stdlib.h>
/*
typedef struct
{
	char book_name[MAX];
	int year_publish;
	char publisher[MAX];
    //int book_count;
	//int books[SIZE];
	int book_price;
} books;




int main()
{
	
	 opening the file in write mode to store data in the file 
	
	FILE *fptr;
	//error check
	fptr = fopen("book_store","wb");//opening of file 
	if(NULL == fptr)//error check
	{
		exit(0);
	}
	
	//array of structure books
	books book_array[SIZE];
    
    int index;
    
    int book_count;
    
    /******************** checking for size **************************/
    printf("\n Count of the books taken by the user:");
    scanf("%d",&book_count);
    
    
    /**************** taking input from the user ************************/
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
	
	
    
    /************************** writing into the file ******************************/
    fwrite(book_array , sizeof(books),book_count,fptr);
	fclose(fptr);
	/**************************** closing of file *********************************/
	
	
	
	/**************************** opening file in read mode **********************************/
	fptr = fopen("book_store","rb");
	fread(book_array , sizeof(books),book_count,fptr);// reading from the file
	
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
    
    printf("\n\n\n");
    
    fclose(fptr);
    /**************************** read mode ends *****************************************/
    
    //append mode
   fptr = fopen("book_store","ab");
    if(NULL == fptr)
	{
		exit(0);
	}
	
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
	
	fwrite(book_array , sizeof(books),book_count,fptr);
	fclose(fptr);
	
    

	return 0;
}

