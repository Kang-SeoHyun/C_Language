# π­μ°κ²° λ¦¬μ€νΈπ­

## π03-1 μΆμμλ£ν(Abstract Data Type)π

#### ADTλ
* μμνκ² κΈ°λ₯μ΄ λ¬΄μμΈμ§λ₯Ό λμ΄ν κ²
  * μμΈν κΈ°λ₯ μ€λͺμ λ°°μ νκ³  λνκΈ°λ₯μΌλ‘ μΆμν

#### μλ£νμ μ μ μΆμμλ£νμ μ μ
* μλ£νμ μ μμ κΈ°λ₯, μ°μ°κ³Ό κ΄λ ¨λ λ΄μ©μ λͺμν  μ μμ.  
  * ex) walletκ΅¬μ‘°μ²΄μμ λ λ£κ³  κΊΌλ΄λ μ°μ° ν¨μλ€.  
    * μ¦, walletμ΄λΌλ μλ£νμ μ μλ wallet μ μμ wallet κΈ°λ₯μ΄ λν΄μ Έ μμ±λλ€. 
* μΆμμλ£νμ μ μμλ κΈ°λ₯, μ°μ°κ³Ό κ΄λ ¨λ λ΄μ©μ λͺμν  μ μμ.  
  * νμ§λ§ λΆνμν κ²μ ν¬ν¨μν€λ κ²μ λ°λμ§νμ§ λͺ»ν¨.

#### κ΅¬μ‘°μ²΄ WalletμΌλ‘ μ½κ² λ°°μ°κΈ°

* κ΅¬μ‘°μ²΄ Wallet
```c
typedef struct_wallet  			  // μ§κ° κ΅¬μ‘°μ²΄ μ μ
{
    int coin100Num;     		  // 100μμ§λ¦¬ λμ μ μ
    int bill5000Num;  			  // 5,000μμ§λ¦¬ μ§νμ μ
} Wallet;
```
> βΌ κ΅¬μ‘°μ²΄λ μλ£κ΅¬μ‘°μ μΌμ’μ

* Walletμ ADTμ μ
```c
Operations:  

int   TakeOutMoney(Wallet* pw, int coinNum, int billNum);   // λμ κΊΌλ΄λ μ°μ°
-  μ²« λ²μ§Έ μΈμλ‘ μ λ¬λ μ£Όμμ μ§κ°μμ λμ κΊΌλ.
-  λ λ²μ§Έ μΈμλ‘ κΊΌλΌ λμ μ μ, μΈ λ²μ©¨ μΈμλ‘ κΊΌλΌ μ§νμ μλ₯Ό μ λ¬ν¨.
-  κΊΌλ΄κ³ μ νλ λμ μ΄μ‘μ΄ λ°νλκ³  κ·Έλ§νΌ λμ΄ μ°¨κ°λ¨.  

void	PutMoney(Wallet* pw, int coinNum, int billNum);     // λμ λ£λ μ°μ°
-  μ²« λ²μ§Έ μΈμλ‘ μ λ¬λ μ£Όμμ μ§κ°μ λμ λ£μ.
-  λ λ²μ§Έ μΈμλ‘ λ£μ λμ μ μ, μΈ λ²μ©¨ μΈμλ‘ λ£μ μ§νμ μλ₯Ό μ λ¬ν¨.
-  λ£μ λ§νΌ λμ κ³Ό μ§νμ μκ° μ¦κ°ν¨.
```
* κ΅¬μ‘°μ²΄ μ μλ₯Ό ν¬ν¨μν€μ§ μλ μ΄μ .  
```
κΈ°λ₯μ κ΅¬ννλλ°μ μμ΄ Walletμ΄ μ΄λ»κ² κ΅¬μ±λμ΄ μλμ§λ μ νμμλ€.  
λ°λΌμ λ°λμ§νμ§ λͺ»νλ€.
```

## π03-2 λ°°μ΄μ μ΄μ©ν λ¦¬μ€νΈμ κ΅¬νπ
