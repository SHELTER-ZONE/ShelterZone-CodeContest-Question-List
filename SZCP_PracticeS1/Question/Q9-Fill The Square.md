# 填滿正方形

> ShelterZone Code Contest S1 PracticeContest Q9<br>
> 題目出處：[UVa 11520](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2515)<br>
> 題目翻譯：[Lucky貓的UVA（ACM）園地](http://luckycat.kshs.kh.edu.tw)<br>

## 題目

本題需要你用大寫字母來畫一個正方形。<br>

說的更清楚一點，給定一個正方形方格裡面有許多空白區塊以及已填入字母的區塊，你必須把所有空白區塊用字母填滿，且滿足下列條件：<br>

1. 相鄰的兩個域塊字母不會相同，共用一個邊稱為相鄰。<br>
2. 有許多填入字母的方式，所以必須請你以字典順序最小的方式填入，以`"列順序" (row major order)`的方式由上而下、由左而右來定先後次序。<br>

---

## 輸入
第一列有一個整數表示測試資料的組數。<br>
每組資料一開始會有一個整數![](https://latex.codecogs.com/svg.latex?n%20(n%20\le%2010))，表示正方形的大小，接下來的![](https://latex.codecogs.com/svg.latex?n)列，每列會有![](https://latex.codecogs.com/svg.latex?n)個字元，字元包含所有大寫字母![](https://latex.codecogs.com/svg.latex?[A,Z])，及用來表示空白的`"."`。

## 輸出
請以`Case #:(#表示測試資料編號)`格式輸出編號，再以矩陣的方式印出所有字母。

---

## 範例輸入
```
2
3
...
...
...
3
...
A..
...
```

<br>
<br>
<br>
<br>
<br>

## 範例輸出
```
Case 1:
ABA
BAB
ABA
Case 2:
BAB
ABA
BAB
```