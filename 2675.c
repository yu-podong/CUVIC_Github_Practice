//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int n;
//	char input[21] = "", repeatStr[161] = "";
//
//	scanf("%d", &n);
//
//	// n���� ���ڿ� S�� �Է¹ް�, �� ���ڿ� R�� ����ϴ� ����
//	for (int i = 0; i < n; i++) {
//		int repeatCount, index=0;
//
//		scanf("%d %s", &repeatCount, input);
//
//		// ���ڿ� S�� �� ���ڿ� ����
//		for (int j = 0; j < strlen(input); j++) {
//			// �� ���ڸ� repeatCount�� ��ŭ repeatStr�� ����
//			for (int k = 0; k < repeatCount; k++) {
//				repeatStr[index++] = input[j];
//			}
//		}
//		// ���ڿ��� ���� �׻� '\0'�� �����ߵǱ� ����
//		repeatStr[index] = '\0';
//
//		printf("%s\n", repeatStr);
//	}
//}