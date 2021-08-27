#include <stdio.h>

int main() {
	int hourNum = 0, minNum = 0;

	scanf("%d %d", &hourNum, &minNum);

	// 입력된 minNum이 45~59이라면 문제 없이 45분 앞서서 계산
	if (45 <= minNum && minNum <= 59) {
		minNum -= 45;
	}
	// 만약 입력된 시간이 0:0 ~ 0:44이라면 23 & (60+(minNum-45))으로 계산
	else if (hourNum == 0) {
		hourNum = 23;
		minNum = 60 + (minNum - 45);
	}
	// 입력된 minNum이 0~44이라면 hourNum - 1 & (60+(minNum-45))으로 계산
	else if (0 <= minNum && minNum <= 44){
		hourNum -= 1;
		minNum = 60 + (minNum - 45);
	}

	printf("%d %d", hourNum, minNum);

	return 0;
}