/* Program to implement string operations */


#include "definitions.h" 
 /* inclusion of definitions.h */


/* header files:
          stdio.h- for including the input/output functions from the library 
          string.h- for including the string operations
          conio.h                                         */

 /* starting of main function */
 int main()
 {
     char str_domain1[MAX]; /* first part of the domain name */
     char str_domain2[MAX]; /* second part of the domain name */
     char str_domain[MAX]; /* storing the concatenated name of the domain */
     char *upper;
     int len=0;/* length of the domain name */
     char str_name1[MAX];/* firstname */
     char str_name2[MAX];/* lastname */
     char str_name[MAX];/* variable for storing concatenated name */
     char password[25],ch;
     int cust_choice;
     long int customer_id;
     char email[MAX];/* email address of the user */
     int age;/* age of the user */
     char address[100];/* storing the residential address of the user */
     int i, frequency = 0;
     char chh;
     int index=0;
     
     /* Enters the firstname of the domain */
     printf("\n Enter the firstname of the domain working on:");
     scanf("%s",&str_domain1);
     
     /* Enters the secondname of the domain */
     printf("\n Enter the secondname of the domain working on:");
     scanf("%s",&str_domain2);
     
     /* Concatenates both the names and stores it in a seperate string */
     str_cat(str_domain1,str_domain2);
     str_cpy(str_domain,str_domain1);
     printf("=============================%s==============================", str_domain);
     
     /* calculates the length of characters in the name */
     printf("\n The length of domain name:");
     len = str_len(str_domain);
     printf("%d", len);
     
     /* calculates the space required for storing domain name */
     printf("\n The space required by domain name:");
     printf("%d", sizeof(str_domain));
     
     printf("\n Whether a new customer or an existing one?");
            
     printf("\n If new ,then press 1");
     printf("\n\n If existing,then press 2");
     scanf("%d",&cust_choice);
             
     switch(cust_choice)/* switch case control statements*/
     {
               
          /* if the user is registering the account */
          case 1: printf("\n Enter username:");
     
                  printf("\n Enter firstname:");
                  scanf("%s", &str_name1);/* entering the firstname */
                  len = str_len(str_name1);/* finding the length of firstname */
                  printf("%d", len);
     
                  printf("\n Enter secondname:");
                  scanf("%s", &str_name2);/* entering the secondname */
                  len = str_len(str_name2);/* finding the length of secondname */
                  printf("%d", len);
                  printf("\n");
     
                  str_cat(str_name1,str_name2);
                  str_cpy(str_name,str_name1);/* concatenating firstname and lastname and copying it in str_name */
     
                  printf("%s",str_name);/* displaying the concatenated name */
                  len = str_len(str_name);/* finding length of concatenated string */
                  printf("\n %d", len);
                  printf("\n");
                           
                  printf("Enter a character to find the frequency: ");
                  scanf("%c",&chh);
                  ch = getchar();

                  for(i = 0; str_name[i] != '\0'; ++i)
                  {
                      if(ch == str_name[i])
                      ++frequency;
                  }

                  printf("Frequency of %c = %d", chh, frequency);
                  printf("\n");
                           
                  upper = str_upper(str_name);
                  printf("%s",upper);
                  printf("\n");
                           
                  str_lower(str_name);
                  printf("%s",str_name);
                           
     
                  printf("\n Enter password:");
    
                  while(1) /* while loop for entering the password */
                  {
                       ch=getche();
                       printf("\b*");
                       if((int)ch==13)
                       break;
                       password[index]=ch;
           
                       index+=1;
                   }
                   password[index]='\0';
    
                   printf("\n\n\nPassword = %s",password);
                             
                   printf("\n Enter email:");
                   scanf("%s",&email);
                             
                   printf("\n Enter age:");
                   scanf("%d",&age);
                             
                   printf("\n Enter  address:");
                   scanf("%s",&address);
                   len = str_len(address);
                   printf("\n %d", len);
                             
                   break;
                             
                   /* if the user has already registered */        
                   case 2: printf("\n Enter customer id:");
                           scanf("%d",&customer_id);
                              
                           printf("\n Enter password:");
    
                           while(1)
                           {
                                ch=getche();
                                printf("\b*");
                                if((int)ch==13)
                                break;
                                password[index]=ch;
           
                                index+=1;
                           }
                           password[index]='\0';
    
                           printf("\n\n\nPassword = %s",password);
                              
                           break;
    }
         
         /* displaying the data entered by the customer */
         printf("\n The data entered at the time of registration:");  
         printf("\n Username:");
         printf("%s",str_name); /* displaying username */        
         
         printf("\n Email id:");
         printf("%s",email);/* displaying email id */
         
         printf("\n Age:");
         printf("%d",age);          
         
         printf("\n address:");
         printf("%s",address);/* displaying address */
                            
    
         getch();
     
        return 0;
 }
 /* ending of main function */
 
 
