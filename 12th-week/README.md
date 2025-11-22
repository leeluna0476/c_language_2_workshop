# C언어(2) 소모임 - 정기 (12주차)
- [포인터의 배열](#포인터의\ 배열)
- [배열의 포인터](#배열의\ 포인터)
## 포인터의 배열
```c
// arr는 char를 저장하는 2차원 배열, arrp는 char의 주소를 저장하는 1차원 배열.
// => arr는 char 변수의 배열, arrp는 char 포인터변수의 배열.
char arr[3][10] = { "hello", "world", "seojilee" };
char *arrp[3] = { "hello", "world", "seojilee" };
```
|Expression|Value|
|---|---|
|`sizeof(arr)`|<!--30-->|
|`sizeof(arrp)`|<!--12-->|
|`sizeof(arr[0])`|<!--10-->|
|`sizeof(arrp[0])`|<!--4-->|
|`arr[1][1]`|<!--'w'-->|
|`arrp[1][1]`|<!--'w'-->|

이 둘의 같은 점, 다른 점은?
|Exp1|Exp2|Exp1 == Exp2|
|---|---|---|
|`arr`|`arrp`|`false`|
|`arr[0]`|`arrp[0]`|`false`|
|`arr[0][0]`|`arrp[0][0]`|`true`|

```c
// arr는 char를 저장하는 2차원 배열, arrp는 char의 주소를 저장하는 1차원 배열.
// => arr는 char 변수의 배열, arrp는 char 포인터변수의 배열.
char arr[3][10] = { "hello", "world", "seojilee" };
char *arrp[3] = { arr[0], arr[1], arr[2] };
```
|Expression|Value|
|---|---|
|`sizeof(arr)`|<!--30-->|
|`sizeof(arrp)`|<!--12-->|
|`sizeof(arr[0])`|<!--10-->|
|`sizeof(arrp[0])`|<!--4-->|
|`arr[1][1]`|<!--'w'-->|
|`arrp[1][1]`|<!--'w'-->|

이 둘의 같은 점, 다른 점은?
|Exp1|Exp2|Exp1 == Exp2|
|---|---|---|
|`arr`|`arrp`|`false`|
|`arr[0]`|`arrp[0]`|`true`|
|`arr[0][0]`|`arrp[0][0]`|`true`|

## 배열의 포인터
