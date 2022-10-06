## 概要

- 値の入力に関する問題です
- 値の入力には `scanf` という命令を用います
- 入力された値を保持しておく変数をあらかじめ宣言しておき、scanfにそれを与えます 以下のように使います

```
int a;
scanf("%d", &a);
```

- 変数の前に付いている `&` は、scanfを使うときはつける必要があります 今は理由を深く考える必要はありません　いずれ分かるようになります
- paizaで値を入力するには、画面下部にある[入力]ボタンを押し、その中に入力したい値を書き込みます
- 複数の値を入力したい場合は、改行で区切ります　例えば5、10、15という3つの値を入力したい場合は以下のように書きます

```
5
10
15
```

- 回答はgistで提出してください

## :turtle: 問題1

- 2つの数字を入力して、それらを足し算して出力しよう
- 以下に動作例を示します

入力

```
10
5
```

出力

```
15
```

## :dog: 問題2

- 2つの数字を入力して、それらの加減乗除(+, -, *, /)を計算して出力しよう
- 以下に動作例を示します

入力

```
10
5
```

出力

```
15
5
50
2
```

## :bear: 問題3

- 直径と高さを入力して、円柱の面積を求めるプログラムを作成しよう
- 1つ目の入力が直径、2つ目の入力が高さとします
- 直径と高さは整数のみです
- 円周率は3.14とします
- 結果は小数第一位まで表示します
- 以下に動作例を示します

入力

```
6
10
```

出力

```
282.6
```

## :whale: 高難度問題

- 直径と高さを入力して、円柱の面積とその誤差を求めるプログラムを作成しよう
- 1つ目の入力が直径、2つ目の入力が高さとします
- 直径と高さは小数の可能性があります
- 円周率が3.14の場合と、円周率が3の場合、この2つの面積と誤差を求めます
- 結果は小数第一位まで表示します
- 以下に動作例を示します

入力

```
3.8
10.1
```

出力

```
282.6
270.0
12.6
```