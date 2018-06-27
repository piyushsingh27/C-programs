#define MAX 20
#define SIZE 10

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[MAX];
	int marks;
}student;

void firststudent(student *);
void arraystudent(student []);
//void secondstudent(student);


int main()
{
	
	char *x;
	
	printf("%d",sizeof(x));
	student s1;
//	student s2;
	student s_arr[SIZE];
	
	
	

	
	arraystudent(s_arr);
	
	//pointer to structure
	firststudent(& s1);

return 0;
}

void firststudent(student *student1)
{
	printf("\n Enter name:");
	strcpy(student1->name,"Anurag");
	printf("%s",student1->name);
	
	printf("\n Enter marks:");
	student1->marks = 85;
	printf("%d",student1->marks);
}

void arraystudent(student std_arr[])
{
	int std_count;
	int index;
	printf("enter count:");
	scanf("%d",&std_count);
	
	for(index=0;index<std_count;index+=1)
	{
		printf("\n Enter name:");
		scanf("%s",std_arr[index].name);
		
		printf("\n Enter marks:");
		scanf("%d",&std_arr[index].marks);
	}
	
	//displaying entered value
	for(index=0;index<std_count;index+=1)
	{
		printf("\n Name:");
		printf("%s",std_arr[index].name);
		printf("\t");
		
		printf("\n Enter marks:");
		printf("%d",std_arr[index].marks);
		
	}
	
}


