#include <stdio.h>

int main() {
	int hourNum = 0, minNum = 0;

	scanf("%d %d", &hourNum, &minNum);

	// �Էµ� minNum�� 45~59�̶�� ���� ���� 45�� �ռ��� ���
	if (45 <= minNum && minNum <= 59) {
		minNum -= 45;
	}
	// ���� �Էµ� �ð��� 0:0 ~ 0:44�̶�� 23 & (60+(minNum-45))���� ���
	else if (hourNum == 0) {
		hourNum = 23;
		minNum = 60 + (minNum - 45);
	}
	// �Էµ� minNum�� 0~44�̶�� hourNum - 1 & (60+(minNum-45))���� ���
	else if (0 <= minNum && minNum <= 44){
		hourNum -= 1;
		minNum = 60 + (minNum - 45);
	}

	printf("%d %d", hourNum, minNum);

	return 0;
}