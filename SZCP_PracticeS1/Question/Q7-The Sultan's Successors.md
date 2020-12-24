# 蘇丹皇后

> ShelterZone Code Contest S1 PracticeContest Q7<br>
> 題目出處：[UVa 167](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=3&page=show_problem&problem=103)<br>
> 題目翻譯：[Lucky貓的UVA（ACM）園地](http://luckycat.kshs.kh.edu.tw)<br>

## 題目

努比亞的蘇丹沒有子女，所以他要從一些有資格的繼承者中挑選一個出來繼承王位。他希望這個繼承者是夠聰明的，所以他決定用一個遊戲來測試這些人。

他準備了一個西洋棋盤，上面的每個格子中均有一個1到99的數字。他又準備了8個皇后棋子。每位參加遊戲的人必須將8個皇后放置到棋盤中，且各皇后彼此不可互相攻擊。可以想像，這樣有不只一種的放置方式。而蘇丹要挑選的繼承者就是那位可以放置8個皇后，並且放置皇后的8個位置中的數的和為最大的那一個人。

你的任務就是讀入棋盤上的數，幫蘇丹算出可以放置8個皇后的最大的和是多少。

---

## 輸入
輸入的第一列有一個整數![](https://latex.codecogs.com/svg.latex?k%20(k%20\le%2020))，代表以下有幾組測試資料（就是幾個棋盤）。

每組測試資料有![](https://latex.codecogs.com/svg.latex?8)列，每列有![](https://latex.codecogs.com/svg.latex?8)個整數（介於![](https://latex.codecogs.com/svg.latex?0)到![](https://latex.codecogs.com/svg.latex?99)）。代表棋盤中格子的資料。

## 輸出
對每一組測試資料，輸出可以放置![](https://latex.codecogs.com/svg.latex?8)個皇后的最大的和是多少。輸出長度為![](https://latex.codecogs.com/svg.latex?5)，靠右對齊。

---

## 範例輸入
```
2
 1  2  3  4  5  6  7  8
 9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
99 92 53 74 69 76 87 98
 9 12 11 12 19 14 15 16
17 14 19 20 29 22 23 24
25 26 57 28 29 30 31 32
33 34 36 76 39 58 39 40
 1 42 43 44 85 46 47 48
58 60 71 82 53 34 55 56
57 58 39 90 61 32 23 44
```

## 範例輸出
```
  260
  429
```

