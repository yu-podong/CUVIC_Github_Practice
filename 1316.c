#include <stdio.h>
#include <string.h>

int main() {
	int n, isGroupWord = 1, groupWordCount = 0;
	char str[101] = "";

	scanf("%d", &n);
	
	// 수행 반복
	for (int i = 0; i < n; i++) {
		// 그룹 단어인지 확인할 문자열 입력
		scanf("%s", str);

		for (int index = 0; index < strlen(str)-1; index++) {
			// str[i]와 str[i+1]이 다를 경우
			if (str[index] != str[index + 1]) {
				// str[i] 이후에 str[i]가 있는지 확인
				for (int j = index + 1; j < strlen(str); j++) {
					// 존재한다면, isGrounpWord = 0 후 break
					if (str[index] == str[j]) {
						isGroupWord = 0;
						break;
					}
				}
			}
			// 입력한 단어가 그룹단어가 아닌 경우, 다음 단어를 확인하러 넘어감
			if (isGroupWord == 0) {
				break;
			}
		}
		// isGroupWord == 1일 경우에 groupWordCount++
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