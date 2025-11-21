# C언어(2) 소모임 - 정기 (12주차)
## 포인터의 배열 vs 배열의 포인터
```c
char arr[3][10] = { "hello", "world", "seojilee" };
char *arrp[3] = { "hello", "world", "seojilee" };
```
이 둘의 같은 점, 다른 점은?
|Expression|Size|
|---|---|
|`sizeof(arr)`|<!--30B-->|
|`sizeof(arrp)`|<!--12B-->|
|`sizeof(arr[0])`|<!--10B-->|
|`sizeof(arrp[0])`|<!--4B-->|
