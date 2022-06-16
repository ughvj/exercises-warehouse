## 概要

- 講義の内容とチャレンジ問題じゃ物足りない！という人向けの問題集です
- 凶悪な問題ばかりです　解けたら自慢して良いです

## :smiling_imp: darkest 1

- 入力がISBN-10の仕様を満たしていたらtrue, 満たしていなければfalseを出力しよう
- 以下に例を示します

入力

```
4876397074
1234567
1234567890
409126168X
```

出力

```
true
false
false
true
```

## :alien: darkest 2

- 以下の並列処理に関するプログラムは、 "Good bye" の出力を目的としています
- しかし、現状のプログラムではいくつかの懸念があります
- 懸念をソース内のコメントに明記した上で、それを解消したプログラムを作成しよう

```
#include <stdio.h>
#include <pthread.h>

int i = 0;

void func() {
    i++;
}

int main(void){
    pthread_t thread;
    pthread_create(&thread, NULL, func, NULL);
    if (i == 0) {
        printf("Hello world\n");
    } else {
        printf("Good bye\n");
    }
}
```

## :innocent: darkest 3

- 小町算を出力するプログラムを作成しよう
- 解が複数あっても、最初に求めた一つを出力するだけで良いです
- また、除算(/)は含めず、 `+`, `-`, `*`, `(空文字)` の4つのみで良いです

入力

```
100
```

出力

```
123-45-67+89
```

## :rage: darkest 4

- coming soon
