#include<stdio.h>

main()
{
	const int a = 10;
	
	int const *ptr = &a;
	
	printf("%d\n", a);
	
	const int *ptr = 200;
	
	printf("%d", a);
	
}
