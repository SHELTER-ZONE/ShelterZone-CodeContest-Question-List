# 最大費氏數列和

> ShelterZone Code Contest S1 PracticeContest Q3<br>
> 題目作者: iblackcat#4119

## 題目

給你個數字，需要你算出在費氏數列前幾項的和。<br>
比如說有個數字是$4$，根據費氏數列，前四項的和為：![](https://latex.codecogs.com/svg.latex?1+1+2+3=7)。<br>
但今天給你一連串的數字，你能在複雜度為![](https://latex.codecogs.com/svg.latex?O(n))的時間內找出最大項嗎?

---

## 輸入
第一行輸入![](https://latex.codecogs.com/svg.latex?n%20(1%20\le%20n%20\le%20100))，代表有多少筆測試資料要輸入。<br>
第二行輸入![](https://latex.codecogs.com/svg.latex?n)個數字![](https://latex.codecogs.com/svg.latex?k%20(1%20\le%20k%20\le%20100))，代表每個費氏數列前![](https://latex.codecogs.com/svg.latex?k)項的和。
## 輸出
根據每一項費氏數列前$k$項的和，找出最大項。

---

## 範例輸入1
```
3
3 4 5 
```
## 範例輸出1
```
12
```

---

## 範例輸入2
```
4
6 5 8 7
```
## 範例輸出2
```
54
```