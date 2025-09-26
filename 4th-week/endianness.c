#include <stdio.h>

int main() {
	unsigned char	a[4];
	scanf("%x", a); // %x: 네 바이트 16진수를 입력받는다.
					// int 변수가 아닌 char 배열에 저장. => 네 바이트 한 덩어리를 한 바이트 네 덩어리로 쪼갠다.

	for (int i = 0; i < 4; ++i) {
		printf("%x\n", a[i]); // 저장된 순서 관찰하기. big-endian, or little-endian?
	}

	int	b = *((int *)a); // int *로 캐스팅 => 네 바이트를 한 덩어리로 취급한다는 뜻.
	printf("%x\n", b);
}
