#include <stdio.h>

int main() {
	int n = 0, parsenum1 = 0 , parsenum2 = 0, newnum = 0, cyclecount;

	scanf("%d", &n);
	newnum = n;

	for (cyclecount = 1; ; cyclecount++) {
		int temp = 0;

		// 각 자릿수를 parsing
		if (newnum >= 10) {
			parsenum1 = newnum / 10;
			parsenum2 = newnum % 10;
		}
		// 작업해야하는 숫자가 10보다 작다면 두자릿 수 작업 진행
		else {
			parsenum1 = 0;
			parsenum2 = newnum;
		}

		// parsing한 수를 더하고, 일의 자리수 구하기
		temp = parsenum1 + parsenum2;
		temp = temp % 10;

		newnum = parsenum2 * 10 + temp;

		// 만약 n과 같다면 반복문을 멈추고 위의 과정을 진행한 횟수 출력
		if (n == newnum) {
			break;
		}
	}

	printf("%d", cyclecount);

	return 0;
}