//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int n;
//	char input[21] = "", repeatStr[161] = "";
//
//	scanf("%d", &n);
//
//	// n개의 문자열 S를 입력받고, 새 문자열 R을 출력하는 구간
//	for (int i = 0; i < n; i++) {
//		int repeatCount, index=0;
//
//		scanf("%d %s", &repeatCount, input);
//
//		// 문자열 S의 각 문자에 접근
//		for (int j = 0; j < strlen(input); j++) {
//			// 각 문자를 repeatCount번 만큼 repeatStr에 저장
//			for (int k = 0; k < repeatCount; k++) {
//				repeatStr[index++] = input[j];
//			}
//		}
//		// 문자열의 끝은 항상 '\0'로 끝나야되기 때문
//		repeatStr[index] = '\0';
//
//		printf("%s\n", repeatStr);
//	}
//}