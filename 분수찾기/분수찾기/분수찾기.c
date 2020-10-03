#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int i, j = 0;

	scanf("%d", &num);

	int n = 0;
	int ncount = 1;

	while (n < num) {
		for (j = 1; j <= ncount; j++) {
			if (n + j == num) {
				i = j;
			}
		}
		n += ncount;
		ncount++;
	}

	int up, down;

	if (ncount % 2 == 0) {
		up = ncount - i;
		down = i;
	}
	else {
		up = i;
		down = ncount - i;
	}

	printf("%d/%d", up, down);

	return 0;
}