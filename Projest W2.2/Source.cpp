#include<stdio.h>
int main() {
	int a;
	printf_s("\nEnter number is more than Zoro (^_^)\n ==>  ");
	scanf_s("%d", &a);
	if (a > 0) {
		for (int s = 1;s <= a;s++) {
			printf_s(" \n");
			for (int d = 1;d <= s;d++) {
				printf_s("%2d ", d);
			}
		}
		printf_s("\n ");

	}
	else {
		printf_s(" Sorry !! your number is less than Zero (T_T)");
	}

	return 0;
}