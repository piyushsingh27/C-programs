#include<stdio.h>

main()
{
	int i,j;
	for(i=5;i>=1;i-=2)
	{
		for(j=1;j<=i;j+=1)
		{
            printf("%d",j);			
		}
		printf("\n");
	}
	
	
	
	
	for(i=1;i<=5;i+=1)
	{
		for(j=1;j<=i;j+=1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i+=1)
	{
		for(j=i;j>=1;j-=1)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i+=1)
	{
		for(j=i;j>=1;j-=1)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
