#include <stdio.h>

// 주어진 문자열 s의 길이를 반환하는 함수.
// Hint: 문자열의 끝은 nul문자 (값 0).
//int mstrlen(char *s) {
	// s에는 문자열의 첫번째 글자의 주소가 저장되어 있다.
	// char 한 덩어리(한 글자)씩 건너뛰면서 글자 수를 센다. (글자 수.. 변수에 저장 후 건너뛸 때마다 +1). (반복 작업?)
	// 한 덩어리씩 건너뛰면서 문자열에 끝에 도달했다면 작업 종료. (반복 작업 끝?)
	// 저장해둔 글자 수를 반환한다.
//}

// 주어진 문자열 s에서 문자 c의 위치(주소)를 찾아서 반환하는 함수.
// "hello", 'e'
// s에서 c를 찾지 못하면, 0(주소 0) 반환.
// => s의 모든 문자를 다 c와 비교해봤는데 없다면... 0 반환.
// => s의 끝까지 가기 전에 같은 문자를 발견한다면... 그 주소 반환.
// +nul 문자는 검색하지 않아도 됩니다.
//char *mstrchr(char *s, char c) {
//	int i = 0;
//	while (s[i]) {
//		if (s[i] == c)
//			return &s[i];
//		++i;
//	}
//	return NULL;
//}

// 시작 주소 s에서 n바이트 떨어진 곳까지 확인.
// c를 찾으면 그 주소 반환.
// 못 찾으면 0 반환.
char *mmemchr(char *s, char c, int n) {
}

int	main(void) {
	printf("%s\n", mstrchr("hello", 'l'));
	// 출력: llo

	printf("%s\n", mmemchr("hello", 'l', 2));
	// 출력: (null)
	return 0;
}
