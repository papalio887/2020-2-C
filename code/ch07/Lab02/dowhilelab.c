#define _CRT_SECURE_NO_WARINGS

#include <stdio.h>

int main(void)
{
	int input = 0, result = 0, digit = 0;
	int devider = 100;

	printf("양의 정수 [100~900] 입력 :");
	scanf_s("%d", &input);
	result = input;

	do
	{
		digit = result / devider;
		result %= devider;
		printf("%3d 단위 출력 : %d \n", devider, digit);
		devider /= 10;
	} while (devider >= 1);

	return  0;

}