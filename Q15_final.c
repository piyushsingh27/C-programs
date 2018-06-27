#include<stdio.h>
#include<conio.h>
#include<math.h>

long decimalToBinary(long);
long binaryToDecimal(long);

int main()
{
	long price1 ;//first decimal value
	long price2 ;//second decimal value
	
	
	//entering those values
	printf("Enter first price:");
	scanf("%ld",&price1);
	
	printf("Enter second price:");
	scanf("%ld",&price2);
	
	
	//bitwise and operation
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
	decimalToBinary(price2);/*second price conversion*/
	printf("Binary value corresponding to price2: %ld",decimalToBinary(price2));
	printf("\n");
	
	long bit_and;//variable to store the bitwise and value
	bit_and = decimalToBinary(price1) & decimalToBinary(price2);
	printf("Binary value after and operation: %ld",bit_and);
	printf("\n");
	
	binaryToDecimal(bit_and);//converting the binary value back to decimal
	printf("Decimal value back: %ld",binaryToDecimal(bit_and));
	printf("\n");
	
	//bitwise or operation
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
	decimalToBinary(price2);/*second price conversion*/
	printf("Binary value corresponding to price2: %ld",decimalToBinary(price2));
	printf("\n");
	
	long bit_or;//variable to store the bitwise or value
	bit_or = decimalToBinary(price1) | decimalToBinary(price2);
	printf("Binary value after and operation: %ld",bit_or);
	printf("\n");
	
	binaryToDecimal(bit_or);//converting the output back to decimal to verify
	printf("Decimal value back: %ld",binaryToDecimal(bit_or));
	printf("\n");
	
	
	//bitwise xor operation
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
	decimalToBinary(price2);/*first price conversion*/
	printf("Binary value corresponding to price2: %ld",decimalToBinary(price2));
	printf("\n");
	
	long bit_xor;
	bit_xor = decimalToBinary(price1) ^ decimalToBinary(price2);
	printf("Binary value after and operation: %ld",bit_xor);
	printf("\n");
	
	binaryToDecimal(bit_xor);
	printf("Decimal value back: %ld",binaryToDecimal(bit_xor));
	printf("\n");
	
	
	
	//bitwise negation
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
	long bit_comp;
	bit_comp = ~(decimalToBinary(price1));
	
	binaryToDecimal(bit_comp);
	printf("Decimal value back: %ld",	binaryToDecimal(bit_comp)); 
	printf("\n");
	
	//bitwise left shift
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
	long bit_left;
	long a = 0;
	a = (decimalToBinary(price1));
	bit_left = a << 2;
	
	binaryToDecimal(bit_comp);
	printf("Decimal value back: %ld",	binaryToDecimal(bit_left)); 
	printf("\n");
	
	
	//bitwise right shift
	decimalToBinary(price1);/*first price conversion*/
	printf("Binary value corresponding to price1: %ld",decimalToBinary(price1));
	printf("\n");
	
long bit_right;
	long b =0;
	b = (decimalToBinary(price1));
	bit_right = b >> 3;
	
	binaryToDecimal(bit_comp);
	printf("Decimal value back: %ld",	binaryToDecimal(bit_right)); 
	printf("\n");	
}


/* function to convert decimal number to binary */
long decimalToBinary(long n)
{
	 int remainder; 
 long binary = 0, i = 1;
  
    while(n != 0) 
	{
        remainder = n%2;
        n = n/2;
        
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
	
}

/* function to convert binary number to decimal */
long binaryToDecimal(long nn)
{
	int remainder; 
    long decimal = 0, i=0;
    while(nn != 0) 
	{
        remainder = nn%10;
        nn = nn/10;
        decimal = decimal + (remainder*pow(2,i));
        ++i;
    }
    return decimal;
}

