#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("정수를 입력하세요: ");
	scanf("%d", &x);
	
	if (x>0){
		printf("양수입니다.");
	}
	else if (x<0){
		printf("음수입니다.");
	}
	else{
		printf("0입니다.");
	}
	
	return 0;
}

