#include <stdio.h>

int main()
{
  int num[2];
  int parse1, parse2, parse3;

  scanf("%d %d", &num[0], &num[1]);

  // �Է��� ���ڸ� �� �ڸ��� ���� parsing
  for (int i = 0; i < 2; i++)
  {
    parse1 = num[i] / 100;        // ���� �ڸ�
    parse2 = (num[i] / 10) % 10;  // ���� �ڸ�
    parse3 = (num[i] % 100) % 10; // ���� �ڸ�

    // ������ ���� �ϼ�
    num[i] = (parse3 * 100) + (parse2 * 10) + parse1;
  }

  // ������ ���ڸ� �̿��Ͽ� ����� �� ȹ��
  if (num[0] > num[1])
  {
    printf("%d", num[0]);
  }
  else
  {
    printf("%d", num[1]);
  }
  printf("\n");
  return 0;
}