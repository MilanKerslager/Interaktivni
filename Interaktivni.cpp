#include <stdio.h>

int main(void) {
	int vstup, a, b, c;
	printf("Vyber si:\n");
	printf("1) trojuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);
	if (vstup == 1) {
		// resime  trojuhelnik

	} else if (vstup == 2) {
		// resime obdelnik

	} else {
		// resime kruznici
		printf("Zadej polomer kruznice: ");
		scanf("%d", &a);
		printf("Obvod: %f\n", 3.14 * 2 * a);
		printf("Obsah: %f\n", 3.14 * a * a);
	}
}