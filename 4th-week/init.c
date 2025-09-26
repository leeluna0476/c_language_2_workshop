#include <stdio.h>

int	main() {
	char	z[5] = { 1, }; // 1, 0, 0, 0, 0
	char	a[2][3] = { // 1, 0, ..., 0
		{ 1, },
	};

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	char	b[][2] = { 1, 0, 0, 0, 0, 0 };	// a와 동일.
	char	c[][2] = { 1, 0, 0, 0, 0 }; 	// a와 동일.
											// 몇개씩 묶을지만 알면 된다.
}
