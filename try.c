 #include<stdio.h>

int fact(int x)
{
	if(x == 0 || x == 1)
	return 1;
	
	else
	return (x*fact(x-1));
}


int main()
{
	int sum=0;
	int n=1000;
	int a,b;
	
	while(n != 0)
	{
		a = n % 10;
		b = fact(a);
		sum = sum + b;
		n = n / 10;
		 
    }
	    if (sum == n)
	    {
	 	  printf("%d",n);
	 	  printf("\n");
	    }
	 
	 return 0;
}
