## 概要

- 2022年 ASO高等部 言語基礎の講義で利用する演習問題です

## ディレクトリ構成

- `01_variables` - 2022/5/20(金)回 変数(へんすう)
- `02_input_values` -  2022/5/20(金)回 値の入力
- `03_if` -  2022/5/27(金)回 条件分岐
- `04_for` - 2022/6/3(金)回 回数の決まっている繰り返し
- `05_while` - 2022/6/10(金)回 回数の決まっていない繰り返し
- `06_array` - 2022/6/17(金)回 配列
- `07_function` - 2022/7/1(金)回 関数
- `08_pointer_alpha` - 2022/7/8(金)回 ポインタ1
- `09_pointer_beta` - 2022/7/22(金)回 ポインタ2
- `10_string` - 2022/09/09(金)回 文字列

## 覚えておきたいキーワード

| キーワード | 役割 | 使用例 |
| - | - | - |
| printf | 文字や数字を画面に出力する | // 文字を出力する場合<br>`printf("Hello world\n");`<br>// int型の変数aを出力する場合<br>`printf("%d", a);` |
| scanf | 文字や数字をプログラムの外から入力する | // int型の変数aに値を入力する場合<br>`scanf("%d", &a);` |
| int / float / double / char | 変数(値を入れておく箱のようなもの)を作る | // int型の変数aを作る場合<br>`int a;`<br>// int型の変数a, bを作る場合<br>`int a, b;` |
| if / else | 条件を分岐する | // 変数aの値が10より小さい場合に"Hello", そうでない場合に "World" を出力する<br>```if (a < 10) { printf("Hello\n");} else {  printf("World\n");}``` |
| for | 繰り返しする | // "Hello world" を5回出力する<br>```int i;for (i=0; i<5; i++) { printf("Hello world");}``` |
| while | 繰り返しする | // "Hello world" を5回出力する<br>```int i; while (i<5) { printf("Hello world"); i++;}``` |

## Visual Studio Codeでプログラミングするための準備

- 簡単な手順を書くので、分からなければ質問してね！

1. [Visual Studio Code](https://azure.microsoft.com/ja-jp/products/visual-studio-code/)をインストールする
2. [clang](https://github.com/llvm/llvm-project/releases/tag/llvmorg-14.0.0)をインストールする
3. Visual Studio Codeに拡張機能 "C/C++" をインストールする
4. Visual Studio Codeの環境設定から、jdkへ環境変数を通す
