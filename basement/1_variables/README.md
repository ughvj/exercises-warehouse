## 概要

- 変数(へんすう)に関する問題です
- 変数は `int a;` のように宣言します
- `int` は型と呼ばれるものです　↑の場合、整数の値を入れることができる変数aを作ります、という意味になります
- 小数を扱いたい場合は、 `float a` と宣言します　そのほかにもいくつか型があります　知りたい場合はぜひググってみてね
- `int a = 5;` のように、初期値を与えることができます
- `=` は代入という意味です　↑の場合、 `a` という変数に `5` という整数を代入する、という意味になります
- `a = a + 5;` の場合は、 aに5を足したものを新たにaに代入する、という意味になります
- 変数には好きな名前を付けることができます　わかりやすい名前をつけておくと後で見返した時に思い出しやすくなります
- 回答はgistで提出してください

## :turtle: 問題1

- 2つの数字を変数にして、それらを足して出力しよう
- たとえば10と5の場合、以下のように出力されればOKです

```
15
```

## :dog: 問題2

- 2つの数字を変数にして、加減乗除(+, -, *, /)を計算して出力しよう
- たとえば10と5の場合、以下のように出力されればOKです

```
15
5
50
2
```

## :bear: 問題3

- 直径と高さを変数にして、円柱の面積を求めるプログラムを作成しよう
- 直径と高さは整数のみです
- 円周率は3.14とします
- 結果は小数第一位まで表示します
- たとえば直径が6, 高さが10の場合、以下のように出力されればOKです

```
282.6
```

## :whale: 高難度問題

- 直径と高さを変数にして、円柱の面積とその誤差を求めるプログラムを作成しよう
- 直径と高さは小数の可能性があります
- 円周率が3.14の場合と、円周率が3の場合、この2つの面積と誤差を求めます
- 結果は小数第一位まで表示します
- たとえば直径が3.8, 高さが10.1の場合、以下のように出力されればOKです

```
114.5
109.4
5.1
```