# 🍋 재귀 🍋

## 🌟02-1 함수의 재귀적 호출의 이해🌟

#### 재귀함수란
함수를 실행하는 중간에 다시 함수를 호출하는 형태의 함수.  
> 함수를 복사하여 실행하므로 재귀적인 형태의 함수 호출 가능함.  
> 따라서 재귀함수에는 탈출 조건이 필요하다.  

#### Recursive 팩토리얼 함수  

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
끝까지 왔으면 다시 거슬러 올라가면서 처음 Factorial(3)에 해당되는 값 return 함!

## 🌟02-2 재귀의 활용🌟

