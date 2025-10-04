#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=8;
	int g;
	int count=0;
	
	do {
		printf("숫자를 예측해보세요: ");
		scanf("%d", &g);
		
		if (answer > g)
			printf("더 큰 숫자를 입력해보세요\n");
			
		else if (answer < g)
			printf("더 작은 숫자를 입력해보세요\n");
		
		count++;
	} while (answer != g);

	printf("정답입니다! 시도 횟수는 %d입니다.", count);
	
	return 0;
}
