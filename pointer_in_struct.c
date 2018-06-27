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
	arr_st std;
	display(std);
	input(& std);
	
	return 0;
}

void display(arr_st s)
{
	s.age = 21;
	strcpy(s.name,"Baba");
	s.reg_no = 1747210;
	
	printf("%d",s.age);
	printf("\t");
	printf("%s",s.name);
	printf("\t");
	printf("%d",s.reg_no);
	printf("\n");
}

void input(arr_st *s)
{
	s->age = 22;
	strcpy(s->name,"Jamshedpur");
	s->reg_no = 1747223;
	
	
	printf("%d",(s->age));
	printf("\t");
	printf("%s",(s->name));
	printf("\t");
	printf("%d",(s->reg_no));
	printf("\n");
}
