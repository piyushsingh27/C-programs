#define ROW_SIZE 4
#define COL_SIZE 2
#define MAX 20

#include<stdio.h>
#include<conio.h>

main()
{
      int row_index;/* for row wise input and output */
      int col_index;/* for column wise input and output */
      int book_name_price[ROW_SIZE][COL_SIZE];
      int user_data[MAX];
      int price_bookss[MAX];
      int i;/* index used for entering the name of the customer */
      long int customer_id;
      int books_count;/* number of books taken by the customer */
      int user_count;/* number of users purchasing the books */
      int price_books=2;
      int index;
      int sum_price = 0;
      
       printf("\n Code numbers referring to different subject books");/* code numbers referring to different books */ 
       printf("\n");
       printf("\n English=1001");
       printf("\n Hindi=1002");
       printf("\n Maths=1003");
       printf("\n Science=1004");
       printf("\n Physics=1005");
       printf("\n Chemistry=1006");
       printf("\n Computer Science=1007");
       
       /* customer count per day */
       printf("\n The user count of a particular day:");
       scanf("%d",&user_count);
      
      /* loop for getting the details of the customers purchasing the book */ 
      printf("\n The number of users purchasing the book on a particular day:");
      for(index=0;index<user_count;index+=1)
      {            
                   printf("\n Enter customer id:");
                   scanf("%d",&customer_id);                     
                    
                  printf("\n Enter the number of books taken by the customer:");
                  scanf("%d",&books_count);          
           
                  printf("\n  List of books taken by %d and its corresponding price:", customer_id);
                  for(row_index=0;row_index<books_count;row_index+=1)
                  {            
                       for(col_index=0;col_index<price_books;col_index+=1)
                       {
                           scanf("%d",&book_name_price[row_index][col_index]);
                       }
                   }
          
                   printf("%d has taken books:",customer_id);
                   for(row_index=0;row_index<books_count;row_index+=1)
                   {   
                       printf("\t Book code is:");         
                       for(col_index=0;col_index<price_books;col_index+=1)
                       {                                             
                            printf("%d",book_name_price[row_index][col_index]);
                            printf("\t");
                       }
                   }
       }
          
           printf("\n The prices of the books taken by the customer:");
             for(index=0;index<books_count;index+=1)
             {
                  scanf("%d",&price_bookss[index]);/* entering the prices of the books taken by the customer */
             }
             
             printf("\n The price of each book and its sum:");
             for(index=0;index<books_count;index+=1)
             {
                  printf("%d",price_bookss[index]);/*displaying the prices of the books taken by the user*/
                  printf("\t");
                  sum_price = sum_price + price_bookss[index];/* calculating sum of prices of books taken by the customer */
             }    
      
             printf("\n The sum total of books taken by the customer:");
             printf("%d",sum_price); /*displaying the sum */ 
       
                                   
                                
      getche();
} 
      
