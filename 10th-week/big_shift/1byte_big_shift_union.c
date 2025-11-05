#include <stdio.h>

union buf_int {
	unsigned short s;
	unsigned char c;
};

int main(void) {
	union buf_int big_int[10];
	int i;
	for (i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i].c = u; // 잘려서 저장되는지 확인하기.
	}

	int N;
	scanf("%d", &N);

	while (N > 0) {
		big_int[9].s <<= 1;
		for (i = 8; i >= 0; --i) {
			big_int[i].s = (big_int[i].s << 1) | ((big_int[i + 1].s >> 8) & 1);
		}

		--N;
	}

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", big_int[i].c);
	}
	printf("\n");
}
