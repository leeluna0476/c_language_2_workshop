# C언어(2) 소모임 - 정기 (11주차)
## 정적 메모리 공간과 동적 메모리 공간
```c
#include <stdlib.h> // to use malloc

int main(void) {
    int sint;
    int *dint = malloc(sizeof(int));
```
1. int 변수 하나만큼의 공간을 가리킨다. (sint 가리키는 게 아님 주의.)
```c
    int sarr1[4];
    int *darr1 = malloc(sizeof(int) * 4);
```
2. int 4개짜리의 공간을 가리킨다. (배열과 같음. sarr1 가리키는 게 아님 주의.)
```c
    int sarr2[2][3];
//  int **darr2 = malloc(sizeof(int) * 2 * 3); // ???
    int **darr2 = malloc(sizeof(int *) * 2);
    darr2[0] = malloc(sizeof(int) * 3);
    darr2[1] = malloc(sizeof(int) * 3);
}
```
3. int 2 * 3 == 6개만큼의 공간을 가리키나?
sarr2와 darr2는, 위 sint dint, sarr1 darr1과 같이 서로 구조가 완벽히 같은가?
