#define _CRT_SECURE_NO_WARINGS

#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է� :  ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);
	printf("�ּҰ� : %u(10����),%p(16����)\n", (int)&input, &input);
	printf("�ּҰ� : %d(10����),%#x(16����)\n", (unsigned)&input,(int)&input);
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));

	return 0;


}