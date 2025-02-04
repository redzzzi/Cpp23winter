- 정렬 알고리즘
  - [버블<sup>bubble</sup>](#버블-정렬)
  - [선택<sup>selection</sup>](#선택-정렬)
  - [삽입<sup>insertion</sup>](#삽입-정렬)
  - [퀵<sup>quick</sup>](#퀵-정렬)
  - [병합<sup>merge</sup>](#병합-정렬)
  - [기수<sup>radix</sup>](#기수-정렬)
 

- [분할 정복](https://ko.wikipedia.org/wiki/%EB%B6%84%ED%95%A0_%EC%A0%95%EB%B3%B5_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)<sup>Divide and Conquer</sup> 알고리즘: 그대로 해결할 수 없는 문제를 **작은 문제로 분할하여** 문제를 해결하는 방법이나 알고리즘
  - 퀵 정렬
    - pivot을 기준으로 배열을 두 개의 **부분으로 나눈** 후, 각각을 정렬
    - 재귀적으로 정렬을 수행하므로 `분할(partition)` → `정복(sort)` → `결합(merge)`의 과정을 거침
  - 병합 정렬
    - 배열을 반으로 계속 **나누고,** 개별 원소가 될 때까지 분할한 후 정렬하면서 병합
    - `분할` → `정복` → `병합`의 과정을 거침
    - 시간 복잡도가 같으나, **추가적인 메모리 공간이 필요**함

# 버블 정렬
- 정의: 두 인접한 데이터의 크기를 비교해 정렬하는 방법
- 시간 복잡도: **O(n<sup>2</sup>)**

<p align="center">
<img src="https://github.com/user-attachments/assets/8e19dbc5-d014-40af-be34-3c26b22abc64" style="width: 700px">
</p>

# 선택 정렬
- 정의: 대상 데이터에서 *최솟값 또는 최댓값을 찾고*, 남은 정렬 부분의 *가장 앞에 있는 데이터와 swap*하는 정렬 방법
- 선택 정렬 자체를 묻는 코테 문제는 잘 없다고 함.

<p align="center">
<img src="https://github.com/user-attachments/assets/000de57f-59a9-4755-a58d-bf3873f8eb63" style="width: 500px">
</p>

# 삽입 정렬
- 정의: 이미 정렬된 데이터 범위에 정렬되지 않은 데이터를 적절한 위치에 삽입해 정렬하는 방식
- 시간 복잡도: **O(n<sup>2</sup>)**

<p align="center">
<img src="https://github.com/user-attachments/assets/80e326ec-5a7c-41a3-969e-ba75913257de" style="width: 700px">
</p>

# 퀵 정렬
- 정의: 기준값<sup>pivot</sup>을 선정해 해당 값보다 작은 데이터와 큰 데이터로 분류하는 것을 반복해 정렬하는 알고리즘
  - pivot을 중심으로 계속 데이터를 *2개의 집합*으로 나누면서 정렬
- 상세 설명된 블로그👍<sup>[1](#quick-sort)</sup>: https://gmlwjd9405.github.io/2018/05/10/algorithm-quick-sort.html
```
💡 기준값 선정 방식이 시간 복잡도에 많은 영향을 줌
```
- 시간 복잡도
  - 평균: **O(nlogn)**
  - 최악: **O(n<sup>2</sup>)**
 
<p align="center">
  <img src="https://github.com/user-attachments/assets/cdb359b7-654e-4600-a31b-514911516de8" style="width: 700px">
</p>

# 병합 정렬
- 정의: 데이터를 분할하고 분할한 집합을 *정렬하며 합치는* 알고리즘
- 시간 복잡도: **O(nlogn)** ⭐

<p align="center"><img src="https://github.com/user-attachments/assets/e4644ca0-4877-4c0c-b606-24f3ee3ae43c" style="width: 500px"></p>


# 기수 정렬
- 정의: 값을 놓고 *비교할 자릿수*를 정한 다음 해당 자릿수만 비교하는 방식
  - 값을 비교하지 않음 ex) 82 > 10 같은 비교 X
- 시간 복잡도: **O(kn)** (k: 데이터의 자릿수)

<p align="center">
  <img src="https://github.com/user-attachments/assets/4af55979-6c9b-44e3-ba93-fa958db40dbc" style="width: 700px">
</p>

---
<a name="quick-sort">1</a> 출처: https://gmlwjd9405.github.io/<br>
이미지 출처: Geeks for Geeks
