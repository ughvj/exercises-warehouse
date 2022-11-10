## 概要

- Java言語の問題です
- `javac [ファイル名]` コマンドでコンパイルします
- `java [クラス名]` コマンドでプログラムを実行します

## 詳細

- Java言語にて文字列を取り扱うには、 `String` というキーワードを用います。以下に例を示します。

```
String s = "Hello";
```

- 上記の例では、変数 `s` を文字列型 `String` で宣言し、 "Hello" という文字列を格納しています。
- 文字列を操作するためのメソッドも豊富に用意されています。以下に利用例を示します。

```
String s = "Hello World";

// 文字列の中の、空白を全て取り除く
// 出力: HelloWorld
s.trim();

// 文字列の長さを数える
// 出力: 11
s.length();

// 文字列からn文字目を得る
// 出力: e
s.charAt(1);
```

## 参考

- 文字列を出力するためには、 `System.out.println` を用います。以下に例を示します。

```
String s = "Hello";
System.out.printf("%s\n", s);
```

- 文字列を入力するためには、 `Scanner` クラスの `nextLine` メソッドを用います。0
- 最後に、 `close` メソッドを用いて入力受付を終了します。以下に例を示します。

```
Scanner scan = new Scanner(System.in);
String input = scan.nextLine();
scan.close();
```

## :turtle: 問題1

- 変数に "Hello world" を格納し、出力してください

出力

```
Hello world
```

## :dog: 問題2

- 文字列を入力し、それの前後の空白を取り除いた上で出力してください

入力

```
   Hello world   
```

出力

```
Hello world
```

## :bear: 問題3

- 文字列を入力し、それが10文字以上であれば再入力させてください
- 10文字未満であれば、そのまま出力してください

入力

```
Hello World
Hello
```

出力

```
Hello
```

## :whale: 高難度問題

- 文字列を入力し、それを10文字ごとに折り返して出力してください

入力

```
Hello Hello Hello Hello World !
```

出力

```
Hello Hell
o Hello He
llo World 
!
```
