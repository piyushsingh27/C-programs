#include<stdio.h>
#include<conio.h>
#include<string.h>

#define SIZE 20
#define MAX 10


typedef struct
{
	int age;
	char name[SIZE];
    int reg_no;	 
} arr_st;

void display(arr_st);
void input(arr_st *);


int main()
{
	arr_st array[MAX];
	arr_st std;
	display(std);
	input(& std);
	int i;
	
	
	for(i=0;i<MAX;i+=1)
	{
		array[i].age = 20;
		strcpy(array[i].name,"Baba Janakpuri");
		array[i].reg_no = 1747210;
	}
	
	for(i=0;i<MAX;i+=1)
	{
		printf("%d",array[i].age);
		printf("\n");
		printf("%s",array[i].name);
		printf("\n");
		printf("%d",array[i].reg_no);
		printf("\n");
	}
}

void display(arr_st s)
{
	s.age = 21;
	strcpy(s.name,"Baba");
	s.reg_no = 1747210;
	
	printf("%d",s.age);
	printf("%s",s.name);
	printf("%d",s.reg_no);
}

void input(arr_st *s)
{
	s->age = 22;
	strcpy(s->name,"Jamshedpur");
	s->reg_no = 1747223;
	
	
	printf("%d",(s->age));
	printf("%s",s->name);
	printf("%d",(s->reg_no));
}
