#include <stdio.h>

int main() {
	
    
	char arr[3][10] = {"First", "Second" , "Third"};
	
	printf("String array Elements are:");
	
	for (int e=0; e < 3; e++)
	{
		printf("%s" , arr[e]);
	}
	
	return 0;
}
