
#include "declarations.h"/* inclusion of declarations.h */
#include<stdio.h>
#include<stdlib.h>
/* header files- stdio.h:standard input output */


 /* beginning of str_cpy function */
 void str_cpy(char str[],char str1[])/* user defined function for string copy */
 {
      int index=0;
      while(str1[index]!='\0')
      {
         str[index]=str1[index];
         index+=1;
      }
      str[index]='\0';
  }  
  /* ending of str_cpy function */
  
  /* beginning of str_cat function */
  void str_cat(char str2[],char str3[])/* user defined function for string concatenate */
  {
       int index=0;
      static int len;
 
       len=str_len(str2);
       str2[len]=' ';
       len++;
       
   while(str3[index]!='\0')
   {
     str2[len]=str3[index];
     len++;
     index++;
   }
   str2[len]='\0';              
  }
  /* ending of str_cat function */
  
  
 /* beginning of str_len function */
 int str_len(char str4[])/* user defined function for calculating string length */
 {
     int index=0;
     
     while(str4[index]!='\0')
     {
          index++;
     }
     
     return index++;
 }
 /* ending of str_len function */
 
 
 /* beginning of str_upper function */
 char *str_upper(char str5[])/* user defined function for converting lowercase string to uppercase character */
 {
      int index=0;
     static int ch;
      
      while(str5[index]!='\0')
      {
          if(str5[index]>='a' && str5[index]<='z')
          {
              ch=(int) str5[index];
              ch= ch-32;
              str5[index]=(char) ch;
          }
        index++;
      }
      return str5;
 }  
 /* ending of str_upper function */
 
 
 /* beginning of str_lower function */
 void str_lower(char str6[])/* user defined function for converting uppercase string to lowercase */
 {
      int index=0;
      int ch;
      
      while(str6[index]!='\0')
      {
          if(str6[index]>='A' && str6[index]<='Z')
          {
               ch=(int) str6[index];
               ch=ch+32;
               str6[index]=(char) ch;
          }
        index++;
      }
 }  
 /* ending of str_lower function */
              
               


char *substring(char *ptr , int start , int end)
{
	static char substring[30];
	//other option is to dynamically allocate memory and return the address 
	int index=0;
	
	ptr=ptr+start;
	char *cpy=ptr;
	while(ptr<cpy+end)
	{
		substring[index]=*ptr;
		ptr+=1;
		index+=1;
	}
	substring[index]='\0';
	return substring;
}


