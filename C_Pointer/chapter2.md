## 포인터의 선언
#### 포인터의 선언
> 주소 저장하는 변수는 포인터라고 하고 ( * )를 붙여서 선언한다.
> > 포인터는 4바이트임.  
> > char* cp = &c 이면, cp = &c, c = * cp 임.  
> > (* ) 주소는 변수의 이름(메모리)이기 때문.

## 다차원 포인터
#### 2차원 포인터
> 같은 주소라도 무엇을 저장하고 있느냐에 따라서 형식이 다름.
> > 주소를 담고 있는 곳의 주소는 2차 포인터 형식이 필요함.  
> > > ex) int n = 20; int* np = &n; int** npp = &np;  
> > > (* )np는 n 이므로 값은 20이고, ** npp도 n 이므로 값이 20이다.  
> > > &n = np = * npp
#### 3차원 포인터
> 이 이후는 마찬가지로 똑같음.  
> ~~잘 안씀.~~
> ![image](https://user-images.githubusercontent.com/77817094/171083853-99f23285-1766-4700-a09b-80d8b8668959.png)

## 포인터의 연산
#### 포인터에 1 더하기
> char형 주소 char* cp 에 1을 더하면 char형 만큼 건너뛴다. (1byte)  
> short형 주소 short* sp 에 1을 더하면 short형 만큼 건너뛴다. (2byte)  
> int형 주소 int* np 에 1을 더하면 int형 만큼 건너뛴다. (4byte)  
> char* 형 주소 char** cpp에 1을 더하면 char* 형 만큼 건너뛴다. (4byte)  
> > ![image](https://user-images.githubusercontent.com/77817094/171084737-4aa2754c-4ab6-42eb-9d19-e995b89ec0b2.png)  
> > char c = 'A' 일때,  
> > 둘쨋줄 결과: (c주소 + 1byte, c주소를 담는곳의 주소 + 4byte, c주소를 담 주-담 주 + 4byte)  
> > 넷째줄 결과: (B, c주소 + 1byte, c주소 담는 곳의 주소 + 4byte)  
> > 다른 자료형도 마찬가지로 똑같음.
