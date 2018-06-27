#define MAX 10 /* Macro instruction */

#include<stdio.h>
#include<conio.h> /* header files */

main()
{
      int price_booksf[MAX];/* array for entering price of books using for loop */
      int price_booksw[MAX];/* array for entering price of books using while loop */
      int sumf = 0;/* calculating the sum total of the price of books taken by the customer */
      int sumw = 0;/* calculating the sum total of the price of books taken by the customer */
      int index;
      int books_count;
      char answer;
      
      /* Implementation of for loop */
      
      do
      {
                        
      printf("\n Enter the number of books taken by the customer:");
      scanf("%d",&books_count); /*entering the number of books taken by customer */
      
      printf("\n Enter the price of each book taken by the user:");
      for(index=0;index<books_count;index+=1)
      {
           scanf("%d",&price_booksf[index]);/* price of each book entered using for loop */
      }
      
      printf("\n The price of each book and its sum:");
      for(index=0;index<books_count;index+=1)
      {
            printf("%d",price_booksf[index]);/* price of each book displayed */
            printf("\t");
            sumf=sumf+price_booksf[index];/* calculating sum of prices of books taken by the customer */
      }    
      
      printf("\n The sum total of books taken by the customer:");
      printf("%d",sumf); /*displaying the sum */
      
      
      /* Implementation of while loop */
      
      printf("\n Enter the price of each book taken by the user:");
      index=0;
      while(index<books_count)
      {
           scanf("%d",&price_booksw[index]);
           index+=1;
      }/* price of each book entered using for loop */
      
      printf("\n The price of each book and its sum:");
      index=0;
      while(index<books_count)
      {
           printf("%d",price_booksw[index]);/* price of each book displayed */
           printf("\t");
           sumw=sumw+price_booksw[index];/* calculating sum of prices of books taken by the customer */
           index+=1;
      }
      
      printf("\n The sum total of the books taken by the customer:");
      printf("%d",sumw);/*displaying the sum */
      printf("\n");
      
      
      printf(" Do you wish to continue:");
      scanf("%c",&answer);
      }
      while(answer=='y' || answer=='Y');
      getche();
}     
