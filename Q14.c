

/********************************************************************************/
/*    ///////////////////////* MACRO instruction *///////////////////////////   */
/********************************************************************************/    
#define MAX 10
#define SIZE 10


/********************************************************************************/
/*    //////////////////////*header files */////////////////////////////////    */
/********************************************************************************/
#include<stdio.h>
#include<stdlib.h>



int main()
{
	int books_count; /* record of the number of books */
	char book_name[SIZE];/* record of name of each book */
	int store_book[MAX]; /* array for storing the price of each book */
	int index;
	int book_size;
	int *ptr;
	int *ptr1;
	int sum = 0;
	
	/* entering the count of the books */
	printf("\n Enter the number of books taken by the customer");
	scanf("%d",&books_count);
	
	/* dynamic memory allocation using malloc */
	ptr = (int*)malloc(books_count * sizeof(int));
	if(NULL == ptr)
	{
		printf("\n malloc failed");
		exit(0); // terminates the execution
	}
	else
	{
		printf("\n");
		printf("%d",ptr);
	}
	
	/* getting the input of the names of books from user */
	printf("\n");
	printf("Enter name of the books");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n Name[%d]:", index);
		scanf("%s",book_name); // names entered
	}
	
	printf("Enter price of those corresponding books");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n Price[%d]:", index);
		scanf("%d",&store_book[index]); //price entered
	}
	
	//free(ptr);
	
	/* dynamic memory allocation using calloc */
	ptr1 = (int*) calloc(books_count, sizeof(int));
    if(ptr1 == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    else
    {
    	printf("\n");
    	printf("%d",ptr1);
	}
    
    printf("\n");
    printf("Enter name of the books");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n Name[%d]:", index);
		scanf("%s",book_name);
	}
	
	printf("Enter price of those corresponding books");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n Price[%d]:", index);
		scanf("%d",&store_book[index]);
	}
	free(ptr1);
	
	
	/* dynamic memory allocation using realloc */
	ptr = (int *)malloc(books_count * sizeof(int));
	if(ptr == NULL)
	{
		printf("Error! memory not allocated");
		exit(0);
	}
	
	printf("Address of the previously allocated memory");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n");
		printf("%d",ptr + index);
	}
	
	printf("\n");
	printf("Enter the new size of array");
	scanf("%d",&book_size);
	
	ptr = realloc(ptr,book_size);
	for(index=0;index<book_size;index+=1)
	{
		printf("\n");
		printf("%d",ptr + index);
	}
    
    
    
	return 0;
}

