
#include<stdio.h>
#include<conio.h>
#include<string.h> /* header files */

main()
{
             /* Q.1 */
             char customer_name;/* name of customer */
             char interested_books;/* books of customer interest */
             short int type_books=7;/* total types of books in the store ,initialised*/
             unsigned int customer_age;/* age of the customer */
             int customer_books;/* books taken by the customer */
             long int customer_id;/* identification number of the customer */
             int x=97;
             char ch;
             float price;
             int price_int;
             short int choice,cust_choice;
             unsigned int index;
             char answer;
             
             
             printf("\t\t\t============BOOK STORE MANAGEMENT SYSTEM============");
             printf("\n\n\n");
             
             printf(" \n Total types of books available in the store:");
             printf("%d",type_books);
             printf("\n\n\n");
             
             printf("\n Code numbers referring to different subject books");
             printf("\n");
             printf("\n English=1001");
             printf("\n Hindi=1002");
             printf("\n Maths=1003");
             printf("\n Science=1004");
             printf("\n Physics=1005");
             printf("\n Chemistry=1006");
             printf("\n Computer Science=1007");
             
              printf("\n Enter customer id:");
              scanf("%d",&customer_id);
              
               printf("\n Enter customer name:");
               scanf("%c",&customer_name);
               customer_name=getchar();
               customer_name=getchar();
               customer_name=getchar();
               customer_name=getchar();
               customer_name=getchar();
               customer_name=getchar();
               customer_name=getchar();
               
               printf("\n Books taken by the customer:");
               scanf("%d",&customer_books);
                                          
             
              /* Q.1 Typecasting of integer to character */
             printf("\n The value of x:");
             printf("%d",x );
             printf("\n");
             ch = (char) x;// typecasting int x to char */
             printf("The value after typecasting variable x to character:");
             printf("%c",ch);
             
             printf("\n\n\n Show the details of customer=====");
             printf("\n\n");
             
             printf("Books taken by customer:");
             printf("%d",customer_books);
             printf("\n\n");
             
             
             printf("\n\n\n");
             
             printf("\n The price of book:");
             scanf("%f",&price);
             printf("\n");
             
             printf("\n The price of the book before typecasting to integer:");
             printf("%f",price); 
             
             price_int = (int) price;
             
             printf("\n The price of book after typecasting to integer:");
             printf("%d",price);
             
             
             
             
 getche();
}            
