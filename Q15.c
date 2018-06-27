#define MAX 10


#include<conio.h>
#include<stdio.h>

int main()
{
      int books[MAX]; /* array to enter and display the books taken by the customer */
      long price_books[MAX];/* array to enter and display the price of books taken by the customer */
      int index;
      long sum=0;/* calculating and displaying the sum of prices of books taken by the customer */      
      int books_count;/* number of books taken by the customer */
      char name[MAX];
      
       
             printf("\n Code numbers referring to different subject books");/* code numbers referring to different books */ 
             printf("\n");
             printf("\n English=1001");
             printf("\n Hindi=1002");
             printf("\n Maths=1003");
             printf("\n Science=1004");
             printf("\n Physics=1005");
             printf("\n Chemistry=1006");
             printf("\n Computer Science=1007");
             
                   
             printf("\n Enter the number of books taken by the user:");
             scanf("%d",&books_count);/* number of books taken by the customer */
      
            /* printf("\n  Books taken by the customer:");
             for(index=0;index<books_count;index+=1)
             {
                  scanf("%d",&books[index]);/* entering the books taken by the customer 
             }
             */
             
           /*  printf("\n The books taken by the customer:");
             for(index=0;index<books_count;index+=1)
             {
                  printf("%d",books[index]);/* displaying the books taken by the customer 
                  printf("\n");
             }
             */
             
             
             printf("\n The prices of the books taken by the customer:");
             for(index=0;index<books_count;index+=1)
             {
                  scanf("%ld",&price_books[index]);/* entering the prices of the books taken by the customer */
             }
             
             printf("\n The price of each book and its sum:");
             for(index=0;index<books_count;index+=1)
             {
                  printf("%ld",price_books[index]);/*displaying the prices of the books taken by the user*/
                  printf("\t");
                  sum = sum + price_books[index];/* calculating sum of prices of books taken by the customer */
             }    
      
             printf("\n The sum total of books taken by the customer:");
             printf("%d",sum); /*displaying the sum */
			 
			 for(index=0;index<books_count;index+=1)
			 {
			 	
			 	//taking prices of two books for comparison
			 	printf("%d \t %d",price_books[0],price_books[1]);
			 	
			 	printf("\n");
			 	
			 	
			 	//bitwise and operation
			 	long decimalToBinary(long n;)
			 //	int bit_and = price_books[0] & price_books[1];
			 //	printf("Value of bit_and : %d",bit_and);
			    decimalToBinary(price_books[0]);
			 	long b_and_first = decimalToBinary(price_books[0]);
			 	printf("binary number: %ld",b_and_first);
			 	printf("\n");
			 	
			 	
			 	//bitwise or operation
			 	int bit_or = price_books[0] | price_books[1];
			 	printf("Value of bit_or : %d",bit_or);
			 	printf("\n");
			 	
			 	//bitwise xor operation
			 	int bit_xor = price_books[0] ^ price_books[1];
			 	printf("Value of bit_xor : %d",bit_xor);
			 	printf("\n");
			 	
			 	//bitwise not operation
			 	int bit_comp = ~price_books[0];
			 	printf("Value of bit_comp : %d",bit_comp);
			 	printf("\n");
			 	
			 	//bitwise left shift operation
			 	int bit_left = price_books[0] << 2;
			 	printf("Value of bit_left : %d",bit_left);
			 	printf("\n");
			 	
			 	//bitwise right shift operation
			 	int bit_right = price_books[0] >> 2;
			 	printf("Value of bit_right : %d",bit_right);
			 	printf("\n");
			   }
			 	
			 	
			 	
			 	
			  } 
       
