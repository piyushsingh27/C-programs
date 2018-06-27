#define MAX 100 /* Macro instruction */

#include<stdio.h>
#include<conio.h>
#include<string.h> /* header files */


main()
{
      int books[MAX]; /* array to enter and display the books taken by the customer */
      int price_books[MAX];/* array to enter and display the price of books taken by the customer */
      int index;
      int sum=0;/* calculating and displaying the sum of prices of books taken by the customer */      
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
       
             
             printf("\n The output");
             
             getche();
}
                                               
