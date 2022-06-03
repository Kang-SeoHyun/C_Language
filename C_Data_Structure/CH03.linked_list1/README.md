# 🍭연결 리스트🍭

## 🌟03-1 추상자료형(Abstract Data Type)🌟

#### ADT란
* 순수하게 기능이 무엇인지를 나열한 것
  * 자세한 기능 설명은 배제하고 대표기능으로 추상화
  * 자료형의 정의에 기능, 연산과 관련된 내용을 명시할 수 있음.
    * ex) wallet구조체에서 돈 넣고 꺼내는 연산 함수들.

#### 구조체 Wallet으로 쉽게 배우기

* 구조체 Wallet
```c
typedef struct_wallet  			  // 동전 및 지폐 일부만을 대상으로 표현한 지갑
{
    int coin100Num;     		  // 100원짜리 동전의 수
    int bill5000Num;  			  // 5,000원짜리 지폐의 수
} Wallet;
```

* Wallet의 ADT정의
<pre>
Operations:
```c
int   TakeOutMoney(Wallet* pw, int coinNum, int billNum);   // 돈을 꺼내는 연산
```
-  첫번째 인자로 전달된 주소의 지갑에서 돈을 꺼냄
-  두번째 인자로 꺼낼 동전의 수, 세 번쩨 인자로 꺼낼 지폐의 수를 전달
-  꺼내고자 하는 돈의 총액이 반환 + 그만큼 돈이 차감
```c
void	PutMoney(Wallet* pw, int coinNum, int billNum);     // 돈을 넣는 연산
```
-  첫번째 인자로 전달된 주소의 지갑에 돈을 넣음
-  두번째 인자로 넣을 동전의 수, 세 번쩨 인자로 넣을 지폐의 수를 전달
-  넣은만큼 돈전과 지폐수가 증가
</pre>

## 🌟03-2 배열을 이용한 리스트의 구현🌟
