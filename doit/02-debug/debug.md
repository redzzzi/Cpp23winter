# 디버깅이란?
- 디버깅: 프로그램에서 발생하는 **문법 오류**(syntax error)나 **논리 오류**(statement error)를 찾아 바로잡는 과정

# 실수하기 쉬운 4가지 오류
1. 변수 초기화 오류
2. 반복문에서 인덱스 범위 지정 오류
3. 잘못된 변수 사용 오류
4. 자료형 범위 오류

# [자료형](https://learn.microsoft.com/ko-kr/cpp/cpp/data-type-ranges?view=msvc-170)
| 형식 이름            | 바이트 | 기타 이름                               | 값의 범위                                   |
|:---------------------:|:-------:|:-----------------------------------------:|:-------------------------------------------:|
| `int`              | 4     | signed                                  | -2,147,483,648 ~ 2,147,483,647            |
| `unsigned int`     | 4     | unsigned                                | 0 ~ 4,294,967,295                         |
| `__int8`           | 1     | char                                    | -128 ~ 127                                |
| `unsigned __int8`  | 1     | unsigned char                           | 0 ~ 255
| `__int16`          | 2     | 없음                                    | -32,768 ~ 32,767                          |
| `unsigned __int16` | 2     | unsigned short: unsigned short int      | 0 ~ 65,535                                |
| `__int32`          | 4     | 없음                                    | -2,147,483,648 ~ 2,147,483,647            |
| `unsigned __int32` | 4     | unsigned: unsigned int                  | 0 ~ 4,294,967,295                         |
| `__int64`          | 8     | long long: signed long long             | -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 |
| `unsigned __int64` | 8     | unsigned long long                      | 0 ~ 18,446,744,073,709,551,615            |
| `bool`             | 1     | 없음                                    | `false` 또는 `true`                        |
| `char`             | 1     | 없음                                    | -128 ~ 127 (기본값)                        |
| `signed char`      | 1     | 없음                                    | -128 ~ 127                                |
| `unsigned char`    | 1     | 없음                                    | 0 ~ 255                                   |
| `short`            | 2     | short int: signed short int             | -32,768 ~ 32,767                          |
| `unsigned short`   | 2     | unsigned short int                      | 0 ~ 65,535                                |
| `long`             | 4     | long int: signed long int               | -2,147,483,648 ~ 2,147,483,647            |
| `unsigned long`    | 4     | unsigned long int                       | 0 ~ 4,294,967,295                         |
| `long long`        | 8     | 없음 (그러나 `__int64`와 동일)          | -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 |
| `unsigned long long` | 8   | 없음 (그러나 `unsigned __int64`와 동일) | 0 ~ 18,446,744,073,709,551,615            |
| `enum`             | 다양함 | 없음                                   | 없음                                      |
| `float`            | 4     | 없음                                    | 3.4E +/- 38 (7자리 숫자)                  |
| `double`           | 8     | 없음                                    | 1.7E +/- 308 (15자리 숫자)                |
| `long double`      | double과 같음 | 없음                               | double과 같음                             |
| `wchar_t`          | 2     | `__wchar_t`                             | 0 ~ 65,535                                |
