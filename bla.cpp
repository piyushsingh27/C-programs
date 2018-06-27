#include<stdio.h>

main()
{
	const int a = 10;
	int  *ptr = a;
	
	printf("%d\n", a);
	
//	int const *ptr = 200;

	
	*ptr = 200;
	printf("%d", a);
	
}
