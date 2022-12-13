#include <stdio.h>

int main()
{
 	
 	int numbers[10];
 	int sum=0;
 	
 	for(int i=0; i<10; i++) {
 	
 	 printf("Enter a number");
 	  int n;
 	   scanf("%d", &n);
 	    numbers[i]=n;
 	     sum=sum+numbers[i];
 	 }
 	
 	   printf("Sum: %d", sum);
 	
 	   return 0;
 	
 	
 }

