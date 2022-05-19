## 概要

- 講義の内容じゃ物足りない！という人向けの問題集です
- 解けなくてもなんら問題はありません　暇つぶしにどうぞ
- 講義ではやらないテクニックをたくさん使います
- 模範回答はチャレンジ1だけ公開しています 随時更新(予定)です

## :bamboo: チャレンジ1

- とあるゲームの10連ガチャシミュレータを作ろう
- レアリティごとの確率は以下の通りです
  - SSR:  2 %
  - SR :  6 %
  - R  : 37 %
  - N  : 55 %
- ガチャを9回回してもSR, SSRが出現していなかった場合、10回目は必ずSRが出現する仕様です
- 引いたレアリティを出力してください 以下に出力例を示します

```
N
N
N
N
R
R
N
N
R
SR
```

## :peach: チャレンジ2

- チャレンジ1のガチャにおいて、SSRを引くまでやめないシミュレータを作ろう
- 以下に出力例を示します

```
N
SR
N
N
R
R
N
N
R
SR
N
R
R
R
N
SSR
```

## :airplane: チャレンジ3

- 入力された正の10進数を2進数に変換して出力しよう

入力

```
2022
```

出力

```
11111100110
```

## :zap: チャレンジ4

- [ネイピア数](https://ja.wikipedia.org/wiki/%E3%83%8D%E3%82%A4%E3%83%94%E3%82%A2%E6%95%B0)を小数第n位まで求めて出力しよう
- nは入力されます 定義域は(1≦n≦100)です 定義外の値が入力された場合は小数第5位まで出力します

入力

```
10
```

出力

```
2.7182818284
```