#include <stdio.h>

int main() {
	int n = 0, parsenum1 = 0 , parsenum2 = 0, newnum = 0, cyclecount;

	scanf("%d", &n);
	newnum = n;

	for (cyclecount = 1; ; cyclecount++) {
		int temp = 0;

		// �� �ڸ����� parsing
		if (newnum >= 10) {
			parsenum1 = newnum / 10;
			parsenum2 = newnum % 10;
		}
		// �۾��ؾ��ϴ� ���ڰ� 10���� �۴ٸ� ���ڸ� �� �۾� ����
		else {
			parsenum1 = 0;
			parsenum2 = newnum;
		}

		// parsing�� ���� ���ϰ�, ���� �ڸ��� ���ϱ�
		temp = parsenum1 + parsenum2;
		temp = temp % 10;

		newnum = parsenum2 * 10 + temp;

		// ���� n�� ���ٸ� �ݺ����� ���߰� ���� ������ ������ Ƚ�� ���
		if (n == newnum) {
			break;
		}
	}

	printf("%d", cyclecount);

	return 0;
}