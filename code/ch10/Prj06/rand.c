#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("0~%5d 사이의 난수 5개: reand()\n", RAND_MAX);
	for (int i = 0; i < 5; i++)
		prnitf("%5d ", rand());
	puts("");

	return 0;


}
