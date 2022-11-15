#include <stdio.h>
#include <math.h>

int main()
{
	float valueOne , valueTwo ;
	char op; // + , - , * , / , ^ ,s ,
	/* Enter three numbers:
	    2.0+3.0
	*/
	float answer ;
	printf("Enter three numbers\n");
	scanf("%f%c%f" ,&valueOne,&op,&valueTwo);
    printf("%f%c%f" ,valueOne,op,valueTwo);
    if(op == '+')
    {
    	answer = valueOne + valueTwo;
    	printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
    
	}
else if(op == '-')
	{
		answer = valueOne - valueTwo;
		printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
    }
else if(op == '*')
	{
		answer = valueOne * valueTwo;
		printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
	}
else if(op == '/')
	{

		answer = valueOne / valueTwo;
		printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
		
	}
else if(op == '^')
	{
		answer = pow(valueOne,valueTwo);
		printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
		
	}
else if(op == 's')
	{
		answer = sqrt(valueTwo);
		printf("%f%c%f=%f" ,valueOne,op,valueTwo,answer);
	}
	
	
	return 0;
}
