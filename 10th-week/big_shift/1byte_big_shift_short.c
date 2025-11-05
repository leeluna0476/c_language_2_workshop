#include <stdio.h>

int main(void) {
	unsigned short big_int[10];
	int i;
	for (i = 0; i < 10; ++i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i] = u;
	}

	int N;
	scanf("%d", &N);

	while (N > 0) {
		big_int[9] <<= 1;
		for (i = 8; i >= 0; --i) {
			big_int[i] = (big_int[i] << 1) | ((big_int[i + 1] >> 8) & 1);
		}

		--N;
	}

	for (i = 0; i < 10; ++i) {
		printf("0x%02x ", (unsigned char)big_int[i]); // 빅 엔디언일 때 이러면 상위 1바이트를 읽어오나?
//		printf("0x%02x ", big_int[i] & 0xff); // or this 그렇다면 이게 더 일반적인 코드일지도...
	}
	printf("\n");
}
