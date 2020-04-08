#include <stdio.h> 

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", b % 100 % 10 * a);
	printf("%d\n", b % 100 / 10 * a);
	printf("%d\n", b / 100 * a);
	printf("%d\n", a * b);

	return 0;
}
