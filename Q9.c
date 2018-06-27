
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
	int index; /* index variable for loop */
	int *ptr[MAX]; /* array of pointer storing the address of prices of books */
	int *ptr1[MAX];
	int *ptr2[MAX];
	
	
	/* entering the count of the books */
	printf("\n Enter the number of books taken by the customer");
	scanf("%d",&books_count);
	
	/* entering the names of the books */
	printf("\n Enter the names of the books taken by the customer");
	for(index=0;index<books_count;index+=1)
	{
		printf("\n Name[%d]:", index);
		scanf("%s",book_name);
	}
	
	/* entering the price of books through an array */
	printf("\n Enter the prices of the books");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		scanf("%d",&store_book[index]);
	}
	
	/* pointer pointing to the values of array */
	for(index=0;index<books_count;index+=1)
	{
		ptr[index] = &store_book[index];
	}
	
	/* address of each location using array notation */
	printf("\n Printing the address of array using array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",ptr[index]);
	}
	
	
	/* value of each location using array notation */ 
	printf("\n Printing the values of array by dereferencing through array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",*ptr[index]);
	}
	
	/* address of each location using pointer notation */
	printf("\n Printing the address of array using pointer notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",*(ptr + index));
	}
	
	
	/* value of each location using pointer notation */
	printf("\n Printing the values of array using pointer notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n", *(*(ptr + index)));
	}
	
	/* incrementing pointer */
	for(index=0;index<books_count;index+=1)
	{
		++ptr[index];
	}
	
	
	/* displaying the address of each location of an array after incrementing pointer */
	printf("\n Printing the address of array after incrementing using array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",ptr[index]);
	}
	
	
	/* displaying the value at each location of an array after incrementing pointer */
	printf("\n Printing the values of array by dereferencing after incrementing through array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",*ptr[index]);
	}
	
	/* decrementing pointer */
	for(index=0;index<books_count;index+=1)
	{
		--ptr[index];
	}
	
	
	/* displaying the address of each location of an array after decrementing pointer */
	printf("\n Printing the address of array after decrementing using array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",ptr[index]);
	}
	
	
	/* displaying the value of each location of an array after decrementing pointer */
	printf("\n Printing the values of array by dereferencing after decrementing through array notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",*ptr[index]);
	}
	
		printf("\n Printing the address of array after decrementing using pointer notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n",*(ptr + index));
	}
	
	
	/* value of each location using pointer notation */
	printf("\n Printing the values of array after decrementing using pointer notation");
	printf("\n");
	for(index=0;index<books_count;index+=1)
	{
		printf("%d \n", *(*(ptr + index)));
	}
	
  /*	printf("\n Comparing two pointers:");
	for(index=0;index<books_count;index+=1)
	{
		ptr1[index] = &store_book[0];
	    ptr2[index] = &store_book[MAX-1];
	    if(ptr1 < ptr2)
	    {
		    (ptr1[index])++;
		    printf("Address: %d",ptr1[index]);
		    printf("Values: %d",*ptr1[index]);
	    }
	} */
	
	fflush(stdin);
	return 0;
}


