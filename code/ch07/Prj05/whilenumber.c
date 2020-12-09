#include <stdio.h>
#define MAX 5


int main(void)
{
	int n = 1;

	while (n <= MAX)
		printf("%d\n", n++);

	printf("\n 제어변수 count => %n", n);
	
	return 0;

}