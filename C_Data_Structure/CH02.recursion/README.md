# π μ¬κ· π

## π02-1 ν¨μμ μ¬κ·μ  νΈμΆμ μ΄ν΄π

#### μ¬κ·ν¨μλ
ν¨μλ₯Ό μ€ννλ μ€κ°μ λ€μ ν¨μλ₯Ό νΈμΆνλ ννμ ν¨μ.  
> ν¨μλ₯Ό λ³΅μ¬νμ¬ μ€ννλ―λ‘ μ¬κ·μ μΈ ννμ ν¨μ νΈμΆ κ°λ₯ν¨.  
> λ°λΌμ μ¬κ·ν¨μμλ νμΆ μ‘°κ±΄μ΄ νμνλ€.  

#### β¨Recursive ν©ν λ¦¬μΌ ν¨μβ¨  

* ν¨μ κ΅¬ν
<pre>
1. 0! = 1
2. n! = n * (n - 1)!
</pre>

* μ½λ  
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

* λμ λ°©μ  
<pre>
Factorial(3) = 3 * Factorial(2)  
-> Factorial(2) = 2 * Factorial(1)  
-> Factorial(1) = 1 * Factorial(0)  
-> Factorial(0) = return 1 !νμΆμ‘°κ±΄!  
</pre>  
> λκΉμ§ μμΌλ©΄ λ€μ κ±°μ¬λ¬ μ¬λΌκ°λ©΄μ μ²μ Factorial(3)μ ν΄λΉλλ κ° return ν¨!

## π02-2 μ¬κ·μ νμ©π

#### β¨νΌλ³΄λμΉ μμ΄β¨

* ν¨μ κ΅¬ν
<pre>
1. fibo(1) = 0
2. fibo(2) = 1
3. fibo(n) = (n - 1) + (n - 2)
</pre>

* μ½λ
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
> μ΄ λ°©μμΌλ‘ νλ©΄ ν¨μ ν λ² νΈμΆμ λ λ² νΈμΆλκΈ° λλ¬Έμ μκ°λ³΅μ‘λκ° O(2^n)μ΄ λλ€.  
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
> λ°°μ΄μ λ§λ€μ΄μ μ΄λ―Έ κ³μ° ν κ°μ λ£μ΄μ£Όλ©΄ μκ°λ³΅μ‘λλ O(n)μ΄ λλ€.  
> ![image](https://user-images.githubusercontent.com/77817094/171570888-4371b9a4-e427-492b-a43f-d1a2ad13e6f5.png)

* λμ λ°©μ  
![image](https://user-images.githubusercontent.com/77817094/171571988-69bc5279-aa8b-479b-b7c0-76406075fdfc.png)  

#### β¨μ΄μ§ νμ μκ³ λ¦¬μ¦μ μ¬κ·μ  κ΅¬νβ¨
* ν¨μ κ΅¬ν
<pre>
1. νμ λ²μμ μ€μμ λͺ©νκ°μ΄ μ μ₯λμλμ§ νμΈ
2. μ μ₯λμ§ μμλ€λ©΄ νμ λ²μλ₯Ό λ°μ μ€μ¬μ λ€μ νμμμ(μ¬κ·)
</pre>

* μ½λ
```c
int BsearchRecur(int arr[], int first, int last, int target)
{
    int mid;
    if(first > last)              // λͺ» μ°Ύμμ κ²½μ°μ μ’λ£μ‘°κ±΄
        return -1;
    mid = (first + last) / 2;

    if(arr[mid] == target)        // μ°Ύμμ κ²½μ°
        return mid;
    else if(target < arr[mid])    // mid μλμμ μ°ΎμμΌ νλ κ²½μ°
        return BsearchRecur(arr, first, mid-1, target);
    else                          // mid μλΆλΆμμ μ°ΎμμΌ νλ κ²½μ°
        return BsearchRecur(arr, mid+1, last, target);
}
```
* λμ λ°©μ  
![image](https://user-images.githubusercontent.com/77817094/171573699-c57e4c91-859f-4fd3-899f-80feb9360f7d.png)

## π02-3 νλΈμ΄ νμπ
![image](https://user-images.githubusercontent.com/77817094/171575294-ff33cbb3-cec2-4d6b-a41f-4d50af04cb70.png)  
* λ¬Έμ  ν΄κ²° (ν¨μ κ΅¬ν)
<pre>
1. μμ μλ° n-1κ°(λ§¨ μλλ₯Ό μ μΈν μλ°)λ₯Ό Aμμ Bλ‘ μ΄λ
2. ν° μλ° 1κ°(λ§¨ μλμ μλ°)λ₯Ό Aμμ Cλ‘ μ΄λ
3. μμ μλ° n-1κ°(1μμ μ?κ²¨μ§ μλ°λ€)λ₯Ό Bμμ Cλ‘ μ΄λ
</pre>

* μ½λ
```c
void Hanoi(int num, char from, char by, char to)
{
    if(num == 1)
    {   
        // μ΄λν  μλ°μ μκ° 1κ°μΌ λ, μ΄λ νμΆ μ‘°κ±΄μ΄ λλ€
        printf("μλ°1μ %cμμ %cλ‘ μ΄λ \n", from ,to);
    }
    else
    {
        // 3λ¨κ³ μ€ 1λ¨κ³ : (n-1)κ°λ₯Ό Aμμ Bλ‘ μ?κΈ°κΈ°
        Hanoi(num - 1, from, to, by); // Aμμ Cλ₯Ό ν΅ν΄ Bλ‘
        // 3λ¨κ³ μ€ 2λ¨κ³ : λ§¨ μλ ν° μλ°μ Aμμ Cλ‘ μ?κΈ°κΈ°
        printf("μλ° %dμ %cμμ %cλ‘ μ΄λ \n", num, from, to);
        // 3λ¨κ³ μ€ 3λ¨κ³ : (n-1)κ°λ₯Ό Bμμ Cλ‘ μ?κΈ°κΈ°
        Hanoi(num - 1, by, from, to); // Bμμ Aλ₯Ό ν΅ν΄μ Cλ‘
    }
}

int main(void)
{
    // μλ° 3κ°λ₯Ό Aμμ Bλ₯Ό ν΅ν΄μ Cλ‘ μ?κΈ°κΈ°
    Hanoi(3, 'A', 'B', 'C');
    return 0;
}
```
* λμ λ°©μ  
![image](https://user-images.githubusercontent.com/77817094/171581960-b840b152-3c41-4f8c-8080-e677f51155a3.png)
