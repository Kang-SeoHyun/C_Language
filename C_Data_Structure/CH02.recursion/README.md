# 🍋 재귀 🍋

## 🌟02-1 함수의 재귀적 호출의 이해🌟

#### 재귀함수란
함수를 실행하는 중간에 다시 함수를 호출하는 형태의 함수.  
> 함수를 복사하여 실행하므로 재귀적인 형태의 함수 호출 가능함.  
> 따라서 재귀함수에는 탈출 조건이 필요하다.  

#### ✨Recursive 팩토리얼 함수✨  

* 함수 구현
<pre>
1. 0! = 1
2. n! = n * (n - 1)!
</pre>

* 코드  
```c
#include <stdio.h>
int Factorial(int n)
{
  if(n == 0)
        return 1;
  else
        return n * factorial(n - 1);
}
```

* 동작 방식  
<pre>
Factorial(3) = 3 * Factorial(2)  
-> Factorial(2) = 2 * Factorial(1)  
-> Factorial(1) = 1 * Factorial(0)  
-> Factorial(0) = return 1 !탈출조건!  
</pre>  
> 끝까지 왔으면 다시 거슬러 올라가면서 처음 Factorial(3)에 해당되는 값 return 함!

## 🌟02-2 재귀의 활용🌟

#### ✨피보나치 수열✨

* 함수 구현
<pre>
1. fibo(1) = 0
2. fibo(2) = 1
3. fibo(n) = (n - 1) + (n - 2)
</pre>

* 코드
```c
#include <stdio.h>
int fibo(int n)
{

    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}
```
> 이 방식으로 하면 함수 한 번 호출에 두 번 호출되기 때문에 시간복잡도가 O(2^n)이 된다.  
> ![image](https://user-images.githubusercontent.com/77817094/171571224-f384f44d-166f-4bad-8acb-1d1123955887.png)

```c
#include <stdio.h>
int fibo(int n, int r[])
{
    if(n == 1)
        return 0;
    else if(n == 2)
        return r[n] = 1;
    else if(r[n] > 0)
        return r[n];
    else
        return r[n] = fibo(n - 1, r) + fibo(n - 2, r);
}
```
> 배열을 만들어서 이미 계산 한 값을 넣어주면 시간복잡도는 O(n)이 된다.  
> ![image](https://user-images.githubusercontent.com/77817094/171570888-4371b9a4-e427-492b-a43f-d1a2ad13e6f5.png)

* 동작 방식  
![image](https://user-images.githubusercontent.com/77817094/171571988-69bc5279-aa8b-479b-b7c0-76406075fdfc.png)  

#### ✨이진 탐색 알고리즘의 재귀적 구현✨
* 함수 구현
<pre>
1. 탐색 범위의 중앙에 목표값이 저장되었는지 확인
2. 저장되지 않았다면 탐색 범위를 반을 줄여서 다시 탐색시작(재귀)
</pre>

* 코드
```c
int BsearchRecur(int arr[], int first, int last, int target)
{
    int mid;
    if(first > last)              // 못 찾았을 경우의 종료조건
        return -1;
    mid = (first + last) / 2;

    if(arr[mid] == target)        // 찾았을 경우
        return mid;
    else if(target < arr[mid])    // mid 아래에서 찾아야 하는 경우
        return BsearchRecur(arr, first, mid-1, target);
    else                          // mid 윗부분에서 찾아야 하는 경우
        return BsearchRecur(arr, mid+1, last, target);
}
```
* 동작 방식  
![image](https://user-images.githubusercontent.com/77817094/171573699-c57e4c91-859f-4fd3-899f-80feb9360f7d.png)

## 🌟02-3 하노이 타워🌟
![image](https://user-images.githubusercontent.com/77817094/171575294-ff33cbb3-cec2-4d6b-a41f-4d50af04cb70.png)  
* 문제 해결 (함수 구현)
<pre>
1. 작은 원반 n-1개(맨 아래를 제외한 원반)를 A에서 B로 이동
2. 큰 원반 1개(맨 아래의 원반)를 A에서 C로 이동
3. 작은 원반 n-1개(1에서 옮겨진 원반들)를 B에서 C로 이동
</pre>

* 코드
```c
void Hanoi(int num, char from, char by, char to)
{
    if(num == 1)
    {   
        // 이동할 원반의 수가 1개일 때, 이는 탈출 조건이 된다
        printf("원반1을 %c에서 %c로 이동 \n", from ,to);
    }
    else
    {
        // 3단계 중 1단계 : (n-1)개를 A에서 B로 옮기기
        Hanoi(num - 1, from, to, by); // A에서 C를 통해 B로
        // 3단계 중 2단계 : 맨 아래 큰 원반을 A에서 C로 옮기기
        printf("원반 %d을 %c에서 %c로 이동 \n", num, from, to);
        // 3단계 중 3단계 : (n-1)개를 B에서 C로 옮기기
        Hanoi(num - 1, by, from, to); // B에서 A를 통해서 C로
    }
}

int main(void)
{
    // 원반 3개를 A에서 B를 통해서 C로 옮기기
    Hanoi(3, 'A', 'B', 'C');
    return 0;
}
```
* 동작 방식  
![image](https://user-images.githubusercontent.com/77817094/171581960-b840b152-3c41-4f8c-8080-e677f51155a3.png)
