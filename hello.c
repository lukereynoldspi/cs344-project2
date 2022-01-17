#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 12;
	float y = 3.14;
	char s[] = "Hello, world!";
	printf("x is %d, y is %.6f\n", x, y);
	printf("%s\n", s);

	int i;
	int sum;
	for (i = 0; i < 5; ++i)
	{
		sum = i * 5;
		printf("%d x 5 = %d\n", i, sum);
	}
}
