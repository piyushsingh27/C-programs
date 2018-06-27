#include<stdio.h>

#define MAX 50

extern int sum=0;/* calculating and displaying the sum of prices of books taken by the customer */      
extern int books_count;/* number of books taken by the customer */

int main()
{
      static int books[MAX]; /* array to enter and display the books taken by the customer */
      static int price_books[MAX];/* array to enter and display the price of books taken by the customer */
      int index;
    
     printf("\n Enter the number of books taken by the user:");
     scanf("%d",&books_count);/* number of books taken by the customer */
      
     printf("\n  Books taken by the customer:");
     for(index=0;index<books_count;index+=1)
     {
          scanf("%d",&books[index]);/* entering the books taken by the customer */
     }
             
     printf("\n The books taken by the customer:");
     for(index=0;index<books_count;index+=1)
     {
           printf("%d",books[index]);/* displaying the books taken by the customer */
           printf("\n");
     }
             
             
     printf("\n The prices of the books taken by the customer:");
     for(index=0;index<books_count;index+=1)
     {
          scanf("%d",&price_books[index]);/* entering the prices of the books taken by the customer */
     }
             
     printf("\n The price of each book and its sum:");
     for(index=0;index<books_count;index+=1)
     {
           printf("%d",price_books[index]);/*displaying the prices of the books taken by the user*/
           printf("\t");
           sum = sum + price_books[index];/* calculating sum of prices of books taken by the customer */
     }    
      
      printf("\n The sum total of books taken by the customer:");
      printf("%d",sum); /*displaying the sum */ 
       
    
    getch();
    return 0;
}


char *substring(char *ptr , int start , int end)
{
	static char substring[30];
	//other option is to dynamically allocate memory and return the address 
	int index=0;
	
	ptr=ptr+start;
	char *cpy=ptr;
	while(ptr<cpy+end)
	{
		substring[index]=*ptr;
		ptr+=1;
		index+=1;
	}
	substring[index]='\0';
	return substring;
}
