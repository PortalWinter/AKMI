#include <stdio.h>

int main()

{
	int Integer;
	char Character;
	float inputfloat;
	
	printf( "Enter Integer Value: ");
	scanf("%i" , &Integer);
	
	printf( "Enter Character: ");
	scanf("% c" , &Character);
	
	printf( "Enter Float Value: ");
	scanf("% f" , &inputfloat);
	
	printf(" The Integer Value that you entered is : %i" , Integer);
	printf( "The Character Value that you entered is : %c" , Character);
	printf( "The Float Value that you entered is : %f" , inputfloat);
	
	return 0;
}
