#include <stdio.h>

int main() {
	int num[2];
	int parse1, parse2, parse3;

	scanf("%d %d", &num[0], &num[1]);

	// 입력한 숫자를 각 자릿수 별로 parsing
	for (int i = 0; i < 2; i++) {
		parse1 = num[i] / 100;	// 백의 자리
		parse2 = (num[i] / 10) % 10;	// 십의 자리
		parse3 = (num[i] % 100) % 10;	// 일의 자리

		// 뒤집은 숫자 완성
		num[i] = (parse3 * 100) + (parse2 * 10) + parse1;
	}

	// 뒤집은 숫자를 이용하여 상수의 답 획득
	if (num[0] > num[1]) {
		printf("%d", num[0]);
	}
	else {
		printf("%d", num[1]);
	}

	return 0;
}