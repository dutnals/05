#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int i;
	int sum=0;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	
	for (i=1; i<=x; i++){
		sum += i;
	}
	
	printf("���� %d", sum);
	
	return 0;
}
