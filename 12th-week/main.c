struct A {
    char a;
    int b;
};

struct B {
    char a[100];
    short b;
};

struct C {
    char a[99];
    short b;
};

struct D {
    int a[4];
    short b[2];
};

#include <stdio.h>

int	main(void) {
//	int arr[2][3][4][5];
//	int (*p)[3][4][5] = arr;
//
//	printf("%ld\n", (long)(p + 2) - (long)arr);
//	printf("%ld\n", (long)(p[1] + 3) - (long)arr);
//	printf("%ld\n", (long)p[0][2][5] - (long)arr);
//
//	printf("%ld\n", (long)(&p[100][2] + 5) - (long)arr);
//	printf("%ld\n", (long)(p[2][-1][6]) - (long)arr);
	char c11[3][10];
	char *c2[3] = { c11[0], c11[1], c11[2] };
	char (*c1)[10] = c11;
	char **cp = c2;

	printf("%zu\n", sizeof(c11));
	printf("%zu\n", sizeof(c2));
	printf("%zu\n", sizeof(c1));
	printf("%zu\n", sizeof(cp));
	printf("%zu\n", sizeof(c11[0]));
	printf("%zu\n", sizeof(c2[0]));
	printf("%zu\n", sizeof(c1[0]));
	printf("%zu\n", sizeof(cp[0]));

	printf("%zu\n", sizeof(struct A));
	printf("%zu\n", sizeof(struct B));
	printf("%zu\n", sizeof(struct C));
	printf("%zu\n", sizeof(struct D));

	short arr[2][4][3];

	printf("%lu\n", (unsigned long)((arr + 6)[3] + 2) - (unsigned long)arr);

	return 0;
}
