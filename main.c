#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=8;
	int g;
	int count=0;
	
	do {
		printf("���ڸ� �����غ�����: ");
		scanf("%d", &g);
		
		if (answer > g)
			printf("�� ū ���ڸ� �Է��غ�����\n");
			
		else if (answer < g)
			printf("�� ���� ���ڸ� �Է��غ�����\n");
		
		count++;
	} while (answer != g);

	printf("�����Դϴ�! �õ� Ƚ���� %d�Դϴ�.", count);
	
	return 0;
}
