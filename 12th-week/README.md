# C언어(2) 소모임 - 정기 (12주차)
## 포인터의 배열
```c
char arr[3][10] = { "hello", "world", "seojilee" };
char *arrp[3] = { "hello", "world", "seojilee" };
```
이 둘의 같은 점, 다른 점은?
|Expression|Value|
|---|---|
|`sizeof(arr)`|<!--30-->|
|`sizeof(arrp)`|<!--12-->|
|`sizeof(arr[0])`|<!--10-->|
|`sizeof(arrp[0])`|<!--4-->|
|`arr[1][1]`|<!--'w'-->|
|`arrp[1][1]`|<!--'w'-->|
|`arr[0]`|<!--직접 실행해보기-->|
|`arrp[0]`|<!--직접 실행해보기-->|

```c
char arr[3][10] = { "hello", "world", "seojilee" };
char *arrp[3] = { arr[0], arr[1], arr[2] };
```
이 둘의 같은 점, 다른 점은?
|Expression|Value|
|---|---|
|`sizeof(arr)`|<!--30-->|
|`sizeof(arrp)`|<!--12-->|
|`sizeof(arr[0])`|<!--10-->|
|`sizeof(arrp[0])`|<!--4-->|
|`arr[1][1]`|<!--'w'-->|
|`arrp[1][1]`|<!--'w'-->|
|`arr[0]`|<!--직접 실행해보기-->|
|`arrp[0]`|<!--직접 실행해보기-->|
