#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char op;
	double num1,num2,result;
	
	printf("Enter number 1 :");
	scanf("%lf",&num1);
	
	printf("Enter number 2 :");
	scanf("%lf",&num2);
	
	printf("Enter an operator(+,-,*,/):");
	scanf(" %c", &op);
	
	switch(op){
		case'+':
			result= num1 + num2;
			break;
			
		case'-':
			result= num1 - num2;
			break;
			
		case'*':
			result= num1 * num2;
			break;
			
		case'/':
	    if (num2!=0){
	    	result = num1 / num2;
		}else{
			printf("Error");
		}
		break;
	default:
		printf("invalid operator\n");		
			
	}
	
	printf("result: %2lf\n", result);
	
	return 0;
}
