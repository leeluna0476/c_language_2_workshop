# C언어(2) 소모임 - 정기 (12주차)
> - [포인터의 배열](#포인터의-배열)
> - [배열의 포인터](#배열의-포인터)
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
포인터변수로 배열을 나타내려면?
```c
// 포인터변수로 arr를 순회하며 각 문자열을 개행으로 구분하여 출력해보자.
char arr[3][10] = { "hello", "world", "seojilee" };
char *parr = (char *)arr;
while (parr < (char *)(&arr + 1)) {
    printf("%s\n", parr);
    parr += 10;
}
```
|Expression|Value|
|---|---|
|`sizeof(arr)`|<!--30-->|
|`sizeof(parr)`|<!--4-->|
|`sizeof(arr[0])`|<!--10-->|
|`sizeof(parr[0])`|<!--1-->|

|Exp1|Exp2|Exp1 == Exp2|
|---|---|---|
|`arr`|`parr`|`true`|
|`arr[0]`|`parr`|`true`|
|`arr + 1`|`parr + 1`|`false`|
|`arr[0] + 1`|`parr + 1`|`true`|
|`arr[0]`|`parr[0]`|`false`|
|`arr[0][0]`|`parr[0][0]`|`true`|

배열의 모든 요소는 연속적으로 위치하기에, 1중 포인터로 배열의 각 요소를 순차적으로 가리킬 수 있다.<br>
이 경우 char 변수 1개와, char 변수 10개짜리 덩어리라는 두가지 주소 연산 단위를 가진 arr의 논리적인 구조가 사라진다.<br>
parr는 char 변수 1개를 가리키고, 오직 하나의 주소 연산 단위를 가지기 때문이다.

2중 포인터를 사용해볼 수는 없을까?
```c
char arr[3][10] = { "hello", "world", "seojilee" };
char **parr = (char **)arr;
```
