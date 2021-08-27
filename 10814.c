#include <stdio.h>

void selectionsort(int *, int);
void bubblesort(int *, int);
void insertionsort(int *, int);

int main() {
	int n;
	int *arr = null;
	scanf("%d", &n);

	// 입력할 수의 개수만큼 동적 할당
	arr = (int *)malloc(sizeof(int) * n);

	// 정렬할 숫자를 입력
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	selectionsort(arr, n);
	/*bubblesort(arr, n);
	insertionsort(arr, n);*/

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}

// selection sort
void selectionsort(int* arr, int n) {
	int minindex = 0, temp = 0;

	// 정렬된 원소 뒤에 있는 원소를 선택
	for (int i = 0; i < n-1; i++) {
		minindex = i;
		// 해당 원소 뒤에 있는 원소 중 최솟값 선택
		for (int j = i + 1; j < n; j++) {
			if (arr[minindex] > arr[j]) {
				minindex = j;
			}
		}
		// 해당 원소와 최솟값을 swap
		temp = arr[minindex];
		arr[minindex] = arr[i];
		arr[i] = temp;
	}
}

// bubble sort
void bubblesort(int *arr, int n) {
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

// insertion sort
void insertionsort(int *arr, int n) {
	int temp = 0, preindex = 0;
	// 두번째 원소부터 기준으로 하여
	for (int i = 1; i < n; i++) {
		temp = arr[i];
		preindex = i - 1;
		// 기준 원소보다 값이 큰 친구들을 한 칸씩 뒤로 보내 기준 원소가 들어갈 자리 마련
		while (preindex >= 0 && arr[preindex] > arr[i]) {
			arr[preindex + 1] = arr[preindex];
			preindex--;
		}
		// 마련한 자리에 기준 원소 삽입
		arr[preindex + 1] = temp;
	}
}

