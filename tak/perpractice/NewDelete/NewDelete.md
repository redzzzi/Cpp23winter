## `new`와 `delete`를 다루기 전, C에서의 `malloc`과 `free`
- **malloc**과 **free**는 힙의 메모리 할당 및 소멸에 필요한 함수이다.

# `new` 예시
- int형 변수의 할당: `int* ptr1 = new int;`
- double형 변수의 할당: `double* pr2 = new double;`
- 길이가 3인 int형 배열의 할당: `int* arr1 = new int[3];`
- 길이가 7인 double형 배열의 할당: `double* arr2 = new double[7];`

# `delete` 예시
- int형 변수의 소멸: `delete pr1;`
- double형 변수의 소멸: `delete pr2;`
- 길이가 3인 int형 배열의 소멸: `delete []arr1`
- 길이가 7인 double형 배열의 소멸: `delete []arr2`

```plaintext
new 연산 시 반환된 주소값을 대상으로 delete 연산을 진행하되, 할당된 영역이 배열 주고라면 []를 추가로 명시해주면 된다.
```
