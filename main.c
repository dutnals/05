#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y;
	char op;
	float result;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d %c %d", &x, &op, &y);
	
	
	switch(op)
	{	
		case '+':
			result = x+y;
			break;
			
		case '-':
			result = x-y;
			break;
		
		case '*':
			result = x*y;
			break;
		
		case '/':
			result = (float)x/y;
			break;
		
		default:
			break;
	}

	printf("����� %f", result);
	
	return 0;
}
