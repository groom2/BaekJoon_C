#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int T, k, n;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);

		int sum;
		int** arr = malloc(sizeof(int*) * (k + 1));

		for (int j = 0; j < k + 1; j++) {
			arr[j] = malloc(sizeof(int) * n);
		}

		for (int l = 0; l < n; l++) {
			arr[0][l] = l + 1;
		}

		for (int a = 1; a < k + 1; a++) {
			for (int b = 0; b < n; b++) {
				sum = 0;
				for (int c = 0; c < b + 1; c++) {
					sum += arr[a - 1][c];
				}
				arr[a][b] = sum;
			}
		}
		
		printf("%d\n", arr[k][n - 1]);

	}

	return 0;
}