#define MAX 50 /*Macro instruction */

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
             int books_taken[MAX];
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
             
              
             printf("\n Whether a new customer or an existing one?");
             printf("\n\n If existing,then press 1");
             printf("\n If new ,then press 2");
             scanf("%d",&cust_choice);
             
             /* Q.2 */
             switch(cust_choice)/* switch case control statements*/
             {
                    case 1: printf("\n Enter customer id:");
                            scanf("%d",&customer_id);
                            break;
                                        
                    case 2: printf("\n Enter customer name:");
                            scanf("%c",&customer_name);
                            customer_name=getchar();
                            customer_name=getchar();
                            customer_name=getchar();
                            customer_name=getchar();
                            customer_name=getchar();
                            customer_name=getchar();
                            customer_name=getchar();
                                         
                            printf("\n Enter customer id:");
                            scanf("%d",&customer_id);                   
                            break;
             }                           
             
             printf("\n\n\n Show the details of customer=====");
             printf("\n\n");
             
             printf("Books taken by customer:");
             printf("%d",customer_books);
             printf("\n\n");
             
             printf("Id of the customer:");
             printf("%d",customer_id);
             
             printf("\n\n\n");
             
             
             
             do
             {
                  printf("\n MAIN MENU!!!!!!");/* menu options for the store*/
                  printf("\n 1.School course books");
                  printf("\n 2.University course books");
                  printf("\n 3.Exam reference books");
                  printf("\n 4.Exit");/* exit command if the choice entered is not correct*/
                  printf("\n\n\n");/*end of menu for choice of books*/
             
                  printf("Enter your choice of books:");
                  scanf("%d",&choice);/*choice entered by the user*/
                  switch(choice)
                  {
                        case 1:printf("\n\n You have opted for School course books!!!!!");
                               printf("\n Need books of which stream!!!");
                               printf("\n 1.Science");
                               printf("\n 2.Commerce");
                               printf("\n 3.Arts");
                               printf("\n 4.Exit");/*end of menu for subjects for school books*/
                               printf("\n Enter your choice:");
                               scanf("%d",&choice);
                               switch(choice)
                               {
                                     case 1:printf("\n Which subject in science stream:");
                                            printf("\n 1.Physics");
                                            printf("\n 2.Chemistry");
                                            printf("\n 3.Maths");
                                            printf("\n 4.Computer Science");
                                            printf("\n 5.Exit");
                                            printf("\n Enter your choice:");
                                            scanf("%d",&choice);
                                                       
                                            if(choice==1)
                                            {
                                                   printf("\n You have opted for physics book");
                                                   printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==2)
                                            {
                                                   printf("\n You have opted for chemistry book");
                                                   printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==3)
                                            {
                                                   printf("\n You have opted for maths book");
                                                   printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==4)
                                            {
                                                   printf("\n You have opted for computer science");
                                                   printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else
                                            {
                                                   printf("\n !!!!!!Wrong choice!!!!!");
                                                   break;
                                            }
                                                       
                                     break;/*end of case for selection of science stream school books*/
                                                
                                     case 2:printf("\n Which subject in commerce stream:");
                                            printf("\n 1.Accounts");
                                            printf("\n 2.Economics");
                                            printf("\n 3.Maths");
                                            printf("\n 4.Business Studies");
                                            printf("\n 5.Exit");
                                            printf("\n Enter your choice:");
                                            scanf("%d",&choice);
                                                       
                                            if(choice==1)
                                            {
                                                 printf("\n You have opted for accounts book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==2)
                                            {
                                                 printf("\n You have opted for economics book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==3)
                                            {
                                                 printf("\n You have opted for maths book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==4)
                                            {
                                                 printf("\n You have opted for business studies book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else
                                            {
                                                 printf("\n !!!!!!Wrong choice!!!!!");
                                                 break;
                                            }
                                                       
                                     break;/*end of case for selection of commerce stream school books*/
                                                       
                                     case 3:printf("\n Which subject in Arts stream:");
                                            printf("\n 1.Accounts");
                                            printf("\n 2.Economics");
                                            printf("\n 3.English");
                                            printf("\n 4.Business Studies");
                                            printf("\n 5.Exit");
                                            printf("\n Enter your choice:");
                                            scanf("%d",&choice);
                                                       
                                            if(choice==1)
                                            {
                                                 printf("\n You have opted for accounts book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==2)
                                            {
                                                 printf("\n You have opted for economics book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==3)
                                            {
                                                 printf("\n You have opted for english book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else if(choice==4)
                                            {
                                                 printf("\n You have opted for business studies book");
                                                 printf("\n !!!!!!Thank You!!!!!");
                                            }
                                                       
                                            else
                                            {
                                                 printf("\n !!!!!!Wrong choice!!!!!");
                                                 break;
                                            }
                                                       
                                     break;/*end of case for selection of arts stream school books*/
                                                                      
                                  } 
                        break;/*end of case for selection of school course books*/
                               
                        case 2:printf("\n\n You have opted for University course books!!!!!");
                               printf("\n 1.Undergraduate");
                               printf("\n 2.Postgraduate");
                               printf("\n Enter your choice:");
                               scanf("%d",&choice);
                                  
                               switch(choice)
                               {
                                     case 1:printf("\n You have opted for undergraduate");
                                     printf("\n Which stream in undergraduate");
                                     printf("\n 1.Science");
                                     printf("\n 2.Commerce");
                                     printf("\n 3.Arts");
                                     printf("\n 4.Exit");
                                     printf("\n Enter your choice:");
                                     scanf("%d",&choice);
                                                       
                                     switch(choice)
                                     {
                                           case 1:printf("\n Which subject in science stream:");
                                                  printf("\n 1.Physics");
                                                  printf("\n 2.Chemistry");
                                                  printf("\n 3.Maths");
                                                  printf("\n 4.Computer Science");
                                                  printf("\n 5.Exit");
                                                  printf("\n Enter your choice:");
                                                  scanf("%d",&choice);
                                                       
                                                  if(choice==1)
                                                  {
                                                        printf("\n You have opted for physics book");
                                                        printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==2)
                                                  {
                                                        printf("\n You have opted for chemistry book");
                                                        printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==3)
                                                  {
                                                        printf("\n You have opted for maths book");
                                                        printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==4)
                                                  {
                                                        printf("\n You have opted for computer science");
                                                        printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else
                                                  {
                                                        printf("\n !!!!!!Wrong choice!!!!!");
                                                        break;
                                                  }
                                                       
                                           break;/*end of selection for science stream ug books*/
                                                
                                           case 2:printf("\n Which subject in commerce stream:");
                                                  printf("\n 1.Accounts");
                                                  printf("\n 2.Economics");
                                                  printf("\n 3.Maths");
                                                  printf("\n 4.Business Studies");
                                                  printf("\n 5.Exit");
                                                  printf("\n Enter your choice:");
                                                  scanf("%d",&choice);
                                                       
                                                  if(choice==1)
                                                  {
                                                       printf("\n You have opted for accounts book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==2)
                                                  {
                                                       printf("\n You have opted for economics book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==3)
                                                  {
                                                       printf("\n You have opted for maths book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==4)
                                                  {
                                                       printf("\n You have opted for business studies book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else
                                                  {
                                                       printf("\n !!!!!!Wrong choice!!!!!");
                                                       break;
                                                  }
                                                       
                                           break;/*end of selection for commerce stream ug books*/
                                                       
                                           case 3:printf("\n Which subject in Arts stream:");
                                                  printf("\n 1.Accounts");
                                                  printf("\n 2.Economics");
                                                  printf("\n 3.English");
                                                  printf("\n 4.Business Studies");
                                                  printf("\n 5.Exit");
                                                  printf("\n Enter your choice:");
                                                  scanf("%d",&choice);
                                                       
                                                  if(choice==1)
                                                  {
                                                       printf("\n You have opted for accounts book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==2)
                                                  {
                                                       printf("\n You have opted for economics book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==3)
                                                  {
                                                       printf("\n You have opted for english book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else if(choice==4)
                                                  {
                                                       printf("\n You have opted for business studies book");
                                                       printf("\n !!!!!!Thank You!!!!!");
                                                  }
                                                       
                                                  else
                                                  {
                                                       printf("\n !!!!!!Wrong choice!!!!!");
                                                       break;
                                                  }
                                           }
                                     break;/*end of selecton for arts stream ug books*/
                                                             /*end of selection for undergraduate books*/
                                                      
                                     case 2:printf("\n You have opted for postgraduate");
                                            printf("\n Which stream in postgraduate");
                                            printf("\n 1.Science");
                                            printf("\n 2.Commerce");
                                            printf("\n 3.Arts");
                                            printf("\n 4.Exit");
                                            printf("\n Enter your choice:");
                                            scanf("%d",&choice);
                                                       
                                            switch(choice)
                                            {
                                                  case 1:printf("\n Which subject in science stream:");
                                                         printf("\n 1.Physics");
                                                         printf("\n 2.Chemistry");
                                                         printf("\n 3.Maths");
                                                         printf("\n 4.Computer Science");
                                                         printf("\n 5.Exit");
                                                         printf("\n Enter your choice:");
                                                         scanf("%d",&choice);
                                                       
                                                         if(choice==1)
                                                         {
                                                              printf("\n You have opted for physics book");
                                                              printf("\n !!!!!!Thank You!!!!!");
                                                         }
                                                       
                                                         else if(choice==2)
                                                         {
                                                              printf("\n You have opted for chemistry book");
                                                              printf("\n !!!!!!Thank You!!!!!");
                                                         }
                                                       
                                                       else if(choice==3)
                                                       {
                                                              printf("\n You have opted for maths book");
                                                              printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==4)
                                                       {
                                                              printf("\n You have opted for computer science");
                                                              printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else
                                                       {
                                                              printf("\n !!!!!!Wrong choice!!!!!");
                                                              break;
                                                       }
                                                       
                                            break;/*end of selection for science stream pg books*/
                                                
                                            case 2:printf("\n Which subject in commerce stream:");
                                                   printf("\n 1.Accounts");
                                                   printf("\n 2.Economics");
                                                       printf("\n 3.Maths");
                                                       printf("\n 4.Business Studies");
                                                       printf("\n 5.Exit");
                                                       printf("\n Enter your choice:");
                                                       scanf("%d",&choice);
                                                       
                                                       if(choice==1)
                                                       {
                                                                    printf("\n You have opted for accounts book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==2)
                                                       {
                                                                    printf("\n You have opted for economics book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==3)
                                                       {
                                                                    printf("\n You have opted for maths book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==4)
                                                       {
                                                                    printf("\n You have opted for business studies book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else
                                                       {
                                                                    printf("\n !!!!!!Wrong choice!!!!!");
                                                                    break;
                                                       }
                                                       
                                                       break;/*end of selection for commerce stream pg books*/
                                                       
                                                case 3:printf("\n Which subject in Arts stream:");
                                                       printf("\n 1.Accounts");
                                                       printf("\n 2.Economics");
                                                       printf("\n 3.English");
                                                       printf("\n 4.Business Studies");
                                                       printf("\n 5.Exit");
                                                       printf("\n Enter your choice:");
                                                       scanf("%d",&choice);
                                                       
                                                       if(choice==1)
                                                       {
                                                                    printf("\n You have opted for accounts book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==2)
                                                       {
                                                                    printf("\n You have opted for economics book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==3)
                                                       {
                                                                    printf("\n You have opted for english book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else if(choice==4)
                                                       {
                                                                    printf("\n You have opted for business studies book");
                                                                    printf("\n !!!!!!Thank You!!!!!");
                                                       }
                                                       
                                                       else
                                                       {
                                                                    printf("\n !!!!!!Wrong choice!!!!!");
                                                                    break;
                                                       }
                                                       }
                                                       break;/*end of selection for arts stream pg books*/
                                                             /*end of selection  of postgraduate books*/             
                                  }         
                                  break;/*end of selection for university books*/
                                  
                           case 3:printf("\n\n You have opted for Exam reference books!!!!!!");
                                  printf("\n !!!!!Thank You!!!!!!!");
                                  break;
                                  
                                  
                           case 4:printf("\n\n !!!!!!!Wrong choice!!!!!!!");
                                  break;                                           
             } /*switch case ends*/            
             
             printf("\n\n\n\n");
            
            printf("Do you wish to continue?");
            scanf("%c",&answer);
            }
            while(answer == 'y' || answer == 'Y');

 getche();            
                          
} 
             
      
