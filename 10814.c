#include <stdio.h>

void selectionsort(int *, int);
void bubblesort(int *, int);
void insertionsort(int *, int);

int main() {
	int n;
	int *arr = null;
	scanf("%d", &n);

	// �Է��� ���� ������ŭ ���� �Ҵ�
	arr = (int *)malloc(sizeof(int) * n);

	// ������ ���ڸ� �Է�
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

	// ���ĵ� ���� �ڿ� �ִ� ���Ҹ� ����
	for (int i = 0; i < n-1; i++) {
		minindex = i;
		// �ش� ���� �ڿ� �ִ� ���� �� �ּڰ� ����
		for (int j = i + 1; j < n; j++) {
			if (arr[minindex] > arr[j]) {
				minindex = j;
			}
		}
		// �ش� ���ҿ� �ּڰ��� swap
		temp = arr[minindex];
		arr[minindex] = arr[i];
		arr[i] = temp;
	}
}

// bubble sort
void bubblesort(int *arr, int n) {
	int temp = 0;

	// ���� ������ ���ҵ��� ��
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
	// �ι�° ���Һ��� �������� �Ͽ�
	for (int i = 1; i < n; i++) {
		temp = arr[i];
		preindex = i - 1;
		// ���� ���Һ��� ���� ū ģ������ �� ĭ�� �ڷ� ���� ���� ���Ұ� �� �ڸ� ����
		while (preindex >= 0 && arr[preindex] > arr[i]) {
			arr[preindex + 1] = arr[preindex];
			preindex--;
		}
		// ������ �ڸ��� ���� ���� ����
		arr[preindex + 1] = temp;
	}
}

