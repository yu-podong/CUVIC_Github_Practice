#include <stdio.h>


	scanf("%d", &n);

	// 입력할 수의 개수만큼 동적 할당
	arr = (int *)malloc(sizeof(int) * n);

	// 정렬할 숫자를 입력
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}


		arr[i] = temp;
	}
}

	int temp = 0;

	// 서로 인접한 원소들을 비교
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - (i+1); j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}


}

