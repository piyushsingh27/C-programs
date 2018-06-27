//Demonstrating File text operations

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STAFF 5
#define MAX 30

typedef struct staff
{
 	char names[MAX];
	float salary;
	int staff_id;
}staff_mem;

int main()
{
 	FILE *fptr ;
 	staff_mem staff1;
 	staff_mem *staff_ptr=NULL;
	int i , j , no_staff;
	char ch ;
	
//assgining value to structure to pointer
	staff_ptr = &staff1 ;
	

	
/***********************************WRITE MODE******************************************/	
	fptr = fopen("HostelManagement.txt","w");
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
	
	fputs("\n\nWELCOME TO ACCOMODATION MANAGEMENT SYSTEM",fptr);
	
	printf("\n\nEnter no. of staff employed in your hostel : ");
	scanf("%d",&no_staff);
//dynamic memory allocation
	staff_ptr=(staff_mem*)malloc((no_staff)*sizeof(staff_mem));
//error check
	if(NULL == staff_ptr)
	{
		printf("\nMEMORY FAULT");
		exit(0);
	}
	else
	{
		printf("\n\nMemory allocation successful\n\n");
		printf("Address of memory allocated : %d",staff_ptr);
	}
//accepting details from user	
	printf("\n\nEnter the following details of %d Staffs: \n1.Staff ID\n2.Staff Name \n3.Salary\n",no_staff );
	
	for(i=0 ; i < no_staff ; i+=1)
	{
		printf("\n\nDetails of  Staff %d :\n",i+1);
		scanf("%d %s %f",&staff1.staff_id,staff1.names,&staff1.salary);
	}
//writing details into file
   fputs("\n\nThe details of Staffs are :\n",fptr);
   
   for(i=0 ; i<no_staff ; i+=1)
   {
   	fscanf(fptr , "%d %s %f" ,staff1.staff_id,staff1.names,staff1.salary);
   	fprintf(fptr,"%d %s %f \n" ,staff1.staff_id,staff1.names,staff1.salary);
   }
	
	
	fclose(fptr);
	
/***************************WRITE MODE ENDS*************************************************/

/***************************APPEND MODE*****************************************************/

    fptr = fopen("HostelManagement.txt","a");
	if(NULL == fptr)
	{
	 printf("\n\nFailure : File did not Open");
	 exit(0);	
	}
	else
	{
	 printf("\n\nSuccess : File Opened in Append Mode");	
	}
	do
	{
 	printf("\n\nEnter no. of staff employed in your hostel : ");
	scanf("%d",&no_staff);
	//dynamic memory allocation
	staff_ptr=(staff_mem*)malloc((no_staff)*sizeof(staff_mem));
	//accepting details from user	
	printf("\n\nEnter the following details of %d Staffs: \n1.Staff ID\n2.Staff \n3.Salary\n",no_staff );
	
	for(i=0 ; i<no_staff ; i+=1)
	{
		printf("\n\nDetails of  Staff %d :\n",i+1);
		scanf("%d %s %f",&staff1.staff_id,staff1.names,&staff1.salary);
	}
	//writing details into file
   fputs("\n\nThe details of Staffs are :\n",fptr);
   
   for(i=0 ; i<no_staff ; i+=1)
   {
   	fprintf(fptr,"%d %s %f \n" ,staff1.staff_id,staff1.names,staff1.salary);
   }	

   printf("Do you want to Continue/Repeat\n For Yes :Y or y \n For No :N or n ) ");
   getch();
   scanf("%c",&ch);
   }
   while((ch =='Y')||(ch == 'y'));
   	
fclose(fptr);
/*********************************APPEND MODE ENDS****************************************/

/*********************************READ MODE**********************************************/
	fptr = fopen("HostelManagement.txt","r");
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
	printf("\n\nReading reacords from file");
	for(i=0 ; i<no_staff ; i+=1)
	{
        fscanf(fptr , "%d %s %f" ,staff1.staff_id,staff1.names,staff1.salary);	
	}	
fclose(fptr);
	return 0 ;
}
/****************************READ MODE ENDS********************************************/
