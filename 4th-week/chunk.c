#include <stdio.h>

int	main() {
	char	a[2][3] = {
		{ 0x00, 0x01, 0x02 },
		{ 0x03, 0x04, 0x05 },
	};

	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0]);
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", &a + 1); // &a보다 6가 큰 주소가 나올 것.

	char	b[2][3][4] = {
		{
			{ 0x00, 0x01, 0x02, 0x04 },
			{ 0x05, 0x06, 0x07, 0x08 },
			{ 0x09, 0x0A, 0x0B, 0x0C },
		},
		{
			{ 0x0D, 0x0E, 0x0F, 0x10 },
			{ 0x11, 0x12, 0x13, 0x14 },
			{ 0x15, 0x16, 0x17, 0x18 },
		},
	};

	printf("%p\n", &b[0][0][0]);
	printf("%p\n", b[0][0]);
	printf("%p\n", b[0]);
	printf("%p\n", b);
	printf("%p\n", &b);
	printf("%p\n", &b + 1); // &b보다 24가 큰 주소가 나올 것.

	return 0;
}
