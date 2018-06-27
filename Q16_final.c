//Demonstrating File text operations

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 30

typedef struct
{
	char book_name[MAX];
	int year_publish;
	char publisher[MAX];
	int book_price;
} books;

int main()
{
	char file_name[MAX];
	
 	FILE *fptr ;
 //	memset(file_name,MAX,0);
 	books book1;
 	books *book_ptr=NULL;
	int index ,  book_count;
	char str[MAX];
	
	int choice;
	
/*	printf("\n File name:");
	fgets(file_name,MAX,stdin);
	
	if(str[strlen(str)-1] == '\n')
	{
		str[strlen(str)-1] = '\0';
	}*/
	
//assgining value to structure to pointer
	book_ptr = &book1 ;
	
	do
	{
		printf("\n FILE MENU");
		printf("\n 1.write mode");
		printf("\n 2.append mode");
		printf("\n 3.read mode");
		printf("\n 4.exit");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:/***********************************WRITE MODE******************************************/	
	               fptr = fopen("book.txt","w");
	               //error check
	               if(NULL == fptr)
	               {
	                   printf("Failure : File did not Open");
	                   exit(0);	
	               }
	               else
	               {
	                   printf("Success : File Opened in WRITE MODE");	
	               }	
	
	              //fputs("\n\nWELCOME TO BOOK STORE",fptr);
	
	               printf("\n\nEnter no. of books taken by the customer : ");
	               scanf("%d",&book_count);
                   //dynamic memory allocation
	               book_ptr=(books*)malloc((book_count)*sizeof(books));
                   //error check
	              if(NULL == book_ptr)
	              {
		                printf("\nMEMORY FAULT");
		                exit(0);
	              }
	              else
	              {
		              printf("\n\nMemory allocation successful\n\n");
		              printf("Address of memory allocated : %d",book_ptr);
	              }
                  //accepting details from user	
	              printf("\n\nEnter the following details of %d books",book_count );
	
	              for(index=0 ; index < book_count ; index+=1)
	              {
		               printf("\n\nDetails of  books %d :\n",index+1);
		               printf("\n Name:");
		               scanf("%s" ,book1.book_name);
		               printf("\n price:");
		               scanf("%d",&book1.book_price);
		               printf("\n publisher:");
		               scanf("%s",book1.publisher);
		               printf("\n year of publish");
		               scanf("%d",&book1.year_publish);
	               }
	
                   //writing details into file

                  //fputs("\n\nThe details of books are :\n",fptr);
   
                  for(index=0 ; index<book_count ; index+=1)
                  {
   	                         //fscanf(fptr , "%s %d %s %d" ,book1.book_name,book1.book_price,book1.publisher,book1.year_publish);
   	                          fprintf(fptr,"%s\t%d\t%s\t%d\n" ,book1.book_name,book1.book_price,book1.publisher,book1.year_publish);
                   }
	
	
	              fclose(fptr);
	              /***************************WRITE MODE ENDS*************************************************/
	              break;  
				  
		case 2:/***************************APPEND MODE*****************************************************/

                fptr = fopen("book.txt","a");
	            if(NULL == fptr)
	            {
	                   printf("\n\nFailure : File did not Open");
	                   exit(0);	
	            }
	            else
	            {
	               printf("\n\nSuccess : File Opened in Append Mode");	
	            }
 	                 // printf("\n\nEnter no. of books taken by the customer : ");
	                  //scanf("%d",&book_count);
	                  //dynamic memory allocation
	                  book_ptr=(books*)malloc((book_count)*sizeof(books));
	                  //accepting details from user	
	                  printf("\n\nEnter the following details of %d books taken",book_count );

	                  
		                       printf("\n\nDetails of  books %d :\n",index+1);
		                        printf("\n Name:");
		                        scanf("%s" ,book1.book_name);
		                        printf("\n price:");
		                        scanf("%d",&book1.book_price);
								printf("\n publisher:");
								scanf("%s",book1.publisher);
								printf("\n year of publish");
								scanf("%d",&book1.year_publish);
						
						//writing details into file
   						//fputs("\n\nThe details of books are :\n",fptr);
   
   						for(index=0 ; index<book_count ; index+=1)
   						{
   								fprintf(fptr,"%s\t%d\t%s\t%d\n" ,book1.book_name,book1.book_price,book1.publisher,book1.year_publish);
   						}	

   						
   						
   	
						fclose(fptr);
						/*********************************APPEND MODE ENDS****************************************/	        
						break;
				
			case 3:	/*********************************READ MODE**********************************************/
					fptr = fopen("book.txt","r");
					if(NULL == fptr)
					{
	 					printf("Failure : File did not Open");
	 					exit(0);	
					}
					else
					{
	 					printf("Success : File Opened in Read Mode");	
					}									  									   
					//reading records from file
					printf("\n\nReading records from file");
        				while((fscanf(fptr , "%s %d %s %d" ,book1.book_name,&book1.book_price,book1.publisher,&book1.year_publish))!=EOF)
						{
								
        				printf("\n");
        				printf("Name : %s",book1.book_name);
        				printf("\n");
						printf("Price : %d",book1.book_price);
						printf("\n");
						printf("Publisher : %s",book1.publisher);
						printf("\n");
						printf("Year of publish : %d",book1.year_publish);  
						printf("\n");
					
					}	
	
	
					fclose(fptr);
					
				/****************************READ MODE ENDS********************************************/		
                break;
				
		default : printf("!!!!!!!!!wrong choice!!!!!!!!!");
		          break;		      
		}
	}
	while(choice!=4);
	
	return 0 ;
}
	

	




  
