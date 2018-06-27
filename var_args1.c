#include<stdio.h>
#include<stdarg.h>

int find_max(int n,...)
{
	va_list arg_list;
	int temp=0, max;
	int i;
	va_start(arg_list,n);
	
	for(i=0;i<n;i+=1)
	{
		max = va_arg(arg_list, int);
		if(max <= temp)
		 max = temp;
		 
	}
	return max;
va_end(arg_list);
}

int main()
{
	find_max(4,11,22,5,33);
//	find_max(1,0);
}
