#define MAX 30

/* including header files */
#include<stdio.h>
#include<conio.h>


void change(int *count,int *price)/* count = variable for chamging the books count using call by reference
                                     price = variable for changing the price of book using call by reference */
{
     *count += 5;
     *price += 10;
     printf("%d \t %d",*count,*price);
     printf("\n");
}

void modify(int count_v,int price_v)/* count_v = variable for modifying the books count using call by value
                                       price_v = variable for modifying the price of book using call by value */
{
     count_v += 5;
     price_v += 10;
     printf("%d \t %d",count_v,price_v);
     printf("\n");
}
void display(int price[])/* call by reference*/
{
     int book_count;/* count of the books taken by the customer */
     int index;/* index value for loop*/
     int sum = 0;/* printing the sum of the price */
     int books[MAX];/* array for storing the books */
     char ch;
     
     //fflush(stdin);
     printf("\n Enter the number of books taken by the user:");
     scanf("%d",&book_count);/* number of books taken by the customer */
      
     printf("\n  Books taken by the customer:");
     for(index=0;index<book_count;index+=1)
     {
            scanf("%d",&books[index]);/* entering the books taken by the customer */
     }
             
     printf("\n The books taken by the customer:");
     for(index=0;index<book_count;index+=1)
     {
            printf("%d",books[index]);/* displaying the books taken by the customer */
            printf("\n");
     }
             
             
     printf("\n The prices of the books taken by the customer:");
     for(index=0;index<book_count;index+=1)
     {
           scanf("%d",&price[index]);/* entering the prices of the books taken by the customer */
     }
             
     printf("\n The price of each book and its sum:");
     for(index=0;index<book_count;index+=1)
     {
          printf("%d",price[index]);/*displaying the prices of the books taken by the user*/
          printf("\t");
          sum = sum + price[index];/* calculating sum of prices of books taken by the customer */
     }    
      
     printf("\n The sum total of books taken by the customer:");
     printf("%d",sum); /*displaying the sum */ 
             
     fflush(stdin);
     printf("\n Do you want to continue?");
     scanf("%c",&ch);
             
     if(ch=='Y'||ch=='y')
     display(price);/* applying recursion */
             
             
}


int main()
{
      int books_count;/* count of the books taken by the customer */
      int price_book;/* price of the book */
      int price_books[MAX];
      
      printf("\n Code numbers referring to different subject books");
      printf("\n");
      printf("\n English=1001");
      printf("\n Hindi=1002");
      printf("\n Maths=1003");
      printf("\n Science=1004");
      printf("\n Physics=1005");
      printf("\n Chemistry=1006");
      printf("\n Computer Science=1007");
      printf("\n\n");
      
      printf("\n The number of books taken by the customer:");
      scanf("%d",&books_count);/* books count to demonstrate how call by value and call by reference works */
      
      printf("\n The price of any particular book:");
      scanf("%d",&price_book);/* book price to demonstrate how call by value and call by reference works */
      
      change(&books_count , &price_book);/* call by reference changes the values in actual parameters as well */
      printf("%d \t %d",books_count,price_book);
      printf("\n");
      
      modify(books_count,price_book);/* call by value changes the values in formal parameters only */
      printf("%d \t %d",books_count,price_book);
      printf("\n");
      
      display(price_books);
      
      
      
      
getche();
return 0;
}      
      
