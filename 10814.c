#include <stdio.h>

void selectionSort(int *, int);
void bubbleSort(int *, int);
void insertionSort(int *, int);

int main()
{
  int n;
  int *arr = NULL;
  scanf("%d", &n);

  // �Է��� ���� ������ŭ ���� �Ҵ�
  arr = (int *)malloc(sizeof(int) * n);

  // ������ ���ڸ� �Է�
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  selectionSort(arr, n);
  /*bubbleSort(arr, n);
	insertionSort(arr, n);*/

  for (int i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}

// Selection Sort
void selectionSort(int *arr, int n)
{
  int minIndex = 0, temp = 0;

  // ���ĵ� ���� �ڿ� �ִ� ���Ҹ� ����
  for (int i = 0; i < n - 1; i++)
  {
    minIndex = i;
    // �ش� ���� �ڿ� �ִ� ���� �� �ּڰ� ����
    for (int j = i + 1; j < n; j++)
    {
      if (arr[minIndex] > arr[j])
      {
        minIndex = j;
      }
    }
    // �ش� ���ҿ� �ּڰ��� swap
    temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

// Bubble Sort
void bubbleSort(int *arr, int n)
{
  int temp = 0;

  // ���� ������ ���ҵ��� ��
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - (i + 1); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

// Insertion Sort
void insertionSort(int *arr, int n)
{
  int temp = 0, preIndex = 0;
  // �ι�° ���Һ��� �������� �Ͽ�
  for (int i = 1; i < n; i++)
  {
    temp = arr[i];
    preIndex = i - 1;
    // ���� ���Һ��� ���� ū ģ������ �� ĭ�� �ڷ� ���� ���� ���Ұ� �� �ڸ� ����
    while (preIndex >= 0 && arr[preIndex] > arr[i])
    {
      arr[preIndex + 1] = arr[preIndex];
      preIndex--;
    }
    // ������ �ڸ��� ���� ���� ����
    arr[preIndex + 1] = temp;
  }
}
