## 概要

- 2022年 ASO高等部 言語基礎の講義で利用する演習問題です

## ディレクトリ構成

- `1_variables` - 2022/5/20(金)回 変数(へんすう)
- `2_input_values` -  2022/5/20(金)回 値の入力
- `3_if` -  2022/5/27(金)回 条件分岐
- `4_for` - 2022/6/3(金)回 回数の決まっている繰り返し
- `5_while` - 2022/6/10(金)回 回数の決まっていない繰り返し
- `6_array` - 2022/6/17(金)回 配列
- `7_function` - 2022/6/17(金)回 関数

## 覚えておきたいキーワード

| キーワード | 役割 | 使用例 |
| - | - | - |
| printf | 文字や数字を画面に出力する | // 文字を出力する場合<br>`printf("Hello world\n");`<br>// int型の変数aを出力する場合<br>`printf("%d", a);` |
| scanf | 文字や数字をプログラムの外から入力する | // int型の変数aに値を入力する場合<br>`scanf("%d", &a);` |
| int / float / double / char | 変数(値を入れておく箱のようなもの)を作る | // int型の変数aを作る場合<br>`int a;`<br>// int型の変数a, bを作る場合<br>`int a, b;` |
| if / else | 条件を分岐する | // 変数aの値が10より小さい場合に"Hello", そうでない場合に "World" を出力する<br>```if (a < 10) { printf("Hello\n");} else {  printf("World\n");}``` |
| for | 繰り返しする | // "Hello world" を5回出力する<br>```int i;for (i=0; i<5; i++) { printf("Hello world");}``` |
| while | 繰り返しする | // "Hello world" を5回出力する<br>```int i; while (i<5) { printf("Hello world"); i++;}``` |
