# 📖 자료구조와 알고리즘의 이해 📖    

## 01-0 intro

#### 프로그램이란  
1. 데이터를 표현(저장)하고 = 자료구조  
2. 표현된 데이터를 처리하는 것이다. = 알고리즘

## 01-1 자료구조

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

## 01-2 알고리즘

#### 알고리즘은
자료구조가 결정되어야 그에 따른 효율적인 알고리즘을 결정할 수 있다.  
평가하는 두 가지 요소는 다음과 같다. 
<pre>
1. 시간 복잡도 (수행시간)
2. 공간 복잡도 (메모리 사용량)
</pre>

#### 순차 탐색(Linear Search) 알고리즘

* 코드  
<pre>
<code>
#include <stdio.h>

// 배열의 내용을 왼쪽에서 오른쪽으로 이동시키며 순차적으로 target을 탐색
int    LS(int ar[], int len, int target)
{
    for(int idx = 0; idx < len, idx++)
    {
        if(ar[idx] == target)
            return idx;    // 찾은 대상의 인덱스를 반환
    }
    return -1;             // 찾지 못했다면 -1을 반환
}

int    main()
{
    int    arr[] = {3, 5, 7, 9};
    int    idx;

    // int형 배열이므로 배열의 크기를 string으로 구할 수 없다
    // sizeof를 이용하여 int형 배열의 크기를 구한다
    idx = LS(arr, sizeof(arr)/sizeof(int), 7);
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}
</code>
</pre>

* 시간 복잡도 분석
