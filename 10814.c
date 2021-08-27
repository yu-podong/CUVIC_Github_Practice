//#include <stdio.h>
//
//void selectionSort(int *, int);
//void bubbleSort(int *, int);
//void insertionSort(int *, int);
//
//int main() {
//	int n;
//	int *arr = NULL;
//	scanf("%d", &n);
//
//	// 입력할 수의 개수만큼 동적 할당
//	arr = (int *)malloc(sizeof(int) * n);
//
//	// 정렬할 숫자를 입력
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	selectionSort(arr, n);
//	/*bubbleSort(arr, n);
//	insertionSort(arr, n);*/
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//
//// Selection Sort
//void selectionSort(int* arr, int n) {
//	int minIndex = 0, temp = 0;
//
//	// 정렬된 원소 뒤에 있는 원소를 선택
//	for (int i = 0; i < n-1; i++) {
//		minIndex = i;
//		// 해당 원소 뒤에 있는 원소 중 최솟값 선택
//		for (int j = i + 1; j < n; j++) {
//			if (arr[minIndex] > arr[j]) {
//				minIndex = j;
//			}
//		}
//		// 해당 원소와 최솟값을 swap
//		temp = arr[minIndex];
//		arr[minIndex] = arr[i];
//		arr[i] = temp;
//	}
//}
//
//// Bubble Sort
//void bubbleSort(int *arr, int n) {
//	int temp = 0;
//
//	// 서로 인접한 원소들을 비교
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - (i+1); j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//// Insertion Sort
//void insertionSort(int *arr, int n) {
//	int temp = 0, preIndex = 0;
//	// 두번째 원소부터 기준으로 하여
//	for (int i = 1; i < n; i++) {
//		temp = arr[i];
//		preIndex = i - 1;
//		// 기준 원소보다 값이 큰 친구들을 한 칸씩 뒤로 보내 기준 원소가 들어갈 자리 마련
//		while (preIndex >= 0 && arr[preIndex] > arr[i]) {
//			arr[preIndex + 1] = arr[preIndex];
//			preIndex--;
//		}
//		// 마련한 자리에 기준 원소 삽입
//		arr[preIndex + 1] = temp;
//	}
//}
//
