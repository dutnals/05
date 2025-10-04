#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("정수를 입력하세요: ");
	scanf("%d", &x);
	
	if (x>0){
		printf("절댓값은 %d입니다.", x);
	}
	else {
		printf("절댓값은 %d입니다.", -x);
	}
	
	return 0;
}
