#include <stdio.h>

void scan_big_int(unsigned char *big_int) {
	int i;
	for (i = 9; i >= 0; --i) {
		unsigned int u;
		scanf("%x", &u);
		big_int[i] = u;
	}
}

void print_big_int(unsigned char *big_int) {
	int i;
	for (i = 9; i >= 0; --i) {
		printf("0x%02x ", big_int[i]);
	}
	printf("\n");
}

void single_left_shift_big_int(unsigned char *big_int) {
	unsigned int *ptr1 = (unsigned int *)big_int;
	unsigned short *ptr2 = (unsigned short *)&ptr1[2];
	unsigned int prev_MSB = 0;
	int i;
	for (i = 0; i < 2; ++i) {
		unsigned int curr_MSB = ptr1[i] & 0x80000000;
		ptr1[i] = (ptr1[i] << 1) | (prev_MSB >> 31);
		prev_MSB = curr_MSB;
	}
	*ptr2 = (*ptr2 << 1) | (prev_MSB >> 31);
}

void left_shift_big_int(unsigned char *big_int, int Nbits) {
	while (Nbits > 0) {
		single_left_shift_big_int(big_int);
		--Nbits;
	}
}

int main(void) {
	unsigned char big_int[10];
	int N;

	scan_big_int(big_int);
	scanf("%d", &N);

	print_big_int(big_int);

	left_shift_big_int(big_int, N);
	print_big_int(big_int);
}
