# 🍰 자료구조와 알고리즘의 이해 🍰    

## 🌟01-0 intro🌟

#### 프로그램이란  
1. 데이터를 표현(저장)하고 = 자료구조  
2. 표현된 데이터를 처리하는 것이다. = 알고리즘

## 🌟01-1 자료구조🌟

#### 자료구조는
데이터에 편리하게 접근하고, 변경하기 위해서 데이터를 저장하는 방법

#### 자료구조의 분류
![image](https://user-images.githubusercontent.com/77817094/171097560-60b5b4b6-b9d7-4eb9-b39c-ade29361429a.png)

* 선형 자료구조  
![image](https://user-images.githubusercontent.com/77817094/171099310-afe92716-df3f-4cb6-a795-8feba7b4a0ea.png)  
하나의 자료 뒤에 하나의 자료가 존재함.  
ex) list, stack, queue

* 비선형 자료구조  
![image](https://user-images.githubusercontent.com/77817094/171099401-a172e0a3-ebb2-4f8a-b751-d95ebd4fd148.png)  
하나의 자료 뒤에 여러개의 자료가 존재할 수 있음.  
ex) tree, graph

## 🌟01-2 알고리즘🌟

#### 알고리즘은
자료구조가 결정되어야 그에 따른 효율적인 알고리즘을 결정할 수 있다.  
평가하는 두 가지 요소는 다음과 같다. 
<pre>
1. 시간 복잡도 (수행시간)
2. 공간 복잡도 (메모리 사용량)
</pre>

#### 순차 탐색(Linear Search) 알고리즘

* 코드  
```c
#include <stdio.h>

int    LSearch(int ar[], int len, int target)
{
    int i;
    for(i = 0; i < len, i++)
    {
        if(ar[i] == target)
            return i;               // 찾은 대상의 인덱스를 반환
    }
    return -1;                      // 못 찾았으면 -1 반환
}

int    main()
{
    int    arr[] = {3, 5, 2, 4, 9};
    int    idx;    
    
    idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}
```

* 시간 복잡도 분석
    * 핵심 연산자('==')를 중심으로 시간 복잡도 계산
    * 데이터 수 n개에 대한 연산횟수 함수 T(n) 구하기.
    * 최악의 경우를 시간 복잡도의 기준으로 삼음.

* T(n) = n

#### 이진 탐색(Binary Search) 알고리즘
저장된 데이터가 정렬되어 있을때 사용가능함.

* 코드  
```c
#include <stdio.h>
int     BSearch(int ar[], int len, int target)
{
    int     first = 0;                // 시작 인덱스 값
    int     last = len - 1;           // 마지막 인덱스 값
    int     mid;

    while(first <= last)
    {
        mid = (first + last) / 2;      // 중앙 인덱스 찾기

        if(target == ar[mid])          // 찾았으면
            return(mid);               // 탐색 완료
        else                           // 못 찾았으면 탐색 대상을 반으로 줄인다.
        {
            if(target > ar[mid])       // 중앙 기준 타켓이 더 크면
                first = mid + 1;       // 시작 인덱스를 중앙 다음으로 옮겨줌
            else                       // 중앙 기준 타겟이 더 작으면
                last = mid - 1;        // 마지막 인덱스를 중앙 이전으로 옮겨줌.
        }
    }
    return -1;                         // 못 찾았으면 -1 반환
}

int     main()
{
    int     arr[] = {1, 3, 5, 7, 9};
    int     idx;

    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}
```
* 시간 복잡도 분석
    * 핵심 연산자('==')를 중심으로 시간 복잡도 계산  
    * 데이터 수 n개에 대한 연산횟수 함수 T(n) 구하기.  
    * 최악의 경우를 시간 복잡도의 기준으로 삼음.

* T(n) = log 2 n  
 
#### 빅-오 표기법  
데이터 수의 증가에 따른 연산횟수의 증가 형태를 표현한 것이다.  
증가형태를 표현 한 것이므로 최고차항의 차수가 패턴의 기준이 된다.
* 빅-오 그래프  
![image](https://user-images.githubusercontent.com/77817094/171560870-9a495529-d7c7-49da-9035-5878aecbed86.png)  
* 알고리즘의 시간복잡도  
![image](https://user-images.githubusercontent.com/77817094/171561699-77c9329d-0fd8-4e80-afa3-282aacc1afbd.png)  
데이터의 갯수, 연산횟수에 따라 더 유리한 알고리즘을 선택 할 수 있다.  
#### 빅-오 수학적 접근  
> n >= k 에서 항상 Cg(n) >= f(n) 이면  
> > f(n)의 빅-오는 O(g(n)) 이다.
