#include <stdio.h>
#include <string.h>

int main() {
	int n, isGroupWord = 1, groupWordCount = 0;
	char str[101] = "";

	scanf("%d", &n);
	
	// ���� �ݺ�
	for (int i = 0; i < n; i++) {
		// �׷� �ܾ����� Ȯ���� ���ڿ� �Է�
		scanf("%s", str);

		for (int index = 0; index < strlen(str)-1; index++) {
			// str[i]�� str[i+1]�� �ٸ� ���
			if (str[index] != str[index + 1]) {
				// str[i] ���Ŀ� str[i]�� �ִ��� Ȯ��
				for (int j = index + 1; j < strlen(str); j++) {
					// �����Ѵٸ�, isGrounpWord = 0 �� break
					if (str[index] == str[j]) {
						isGroupWord = 0;
						break;
					}
				}
			}
			// �Է��� �ܾ �׷�ܾ �ƴ� ���, ���� �ܾ Ȯ���Ϸ� �Ѿ
			if (isGroupWord == 0) {
				break;
			}
		}
		// isGroupWord == 1�� ��쿡 groupWordCount++
		if (isGroupWord == 1) {
			groupWordCount++;
		}
		else {
			isGroupWord = 1;
		}
	}

	printf("%d", groupWordCount);

	return 0;
}