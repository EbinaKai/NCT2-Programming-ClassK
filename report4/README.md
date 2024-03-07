# プログラミング基礎 クラスK 課題No.04

次の2つの課題について、ペアで作業分担して作成せよ。main関数やヘッダファイル等共通で利用するものについてはペアで1つを作成すればよいこととする。担当する`関数(a)`および`関数(b)`の設計・実装は、ペア内でそれぞれ担当を決めて行うこと`1.`と`2.`で担当を変更しないこと。

## 1. 次の関数を計算するプログラムを作成せよ

$$f(n) = f(n - 1) + f(n - 2)$$

ただし、$f (0) = 0$, $f (1) = 1$ とし、`n` はコマンドライン引数で与えること。`n` が負の場合は関数の計算を行わず、入力エラーである旨のメッセージを出力すること。  
$f (n)$ を求める関数 `fibonacci` の計算方法は

- (a) 上記条件に従い、再帰呼び出し処理を用いて実装
- (b) 再帰呼び出し処理を用いずに実装

の2種類とし、それぞれが担当の関数を作成すること。

### 考察課題

それぞれの処理方法について実行時間を比較し、実行時間が長い方の処理について、その原因として考えられることを述べよ。

## 2. $(a+b)^{n}$ を展開するプログラムを作成せよ

nはコマンドライン引数で与えるものとする。 n が負の場合は関数の処理を行わず、入力エラーである旨のメッセージを出力すること。

### 出力例 $n = 3$ のとき

$a^3 + 3a^2b + 3ab^2 + b^3$

二項係数 nCr を求める関数の計算方法は

- (a) $n!$ を求める関数を作成し、それを利用する処理
- (b) $_n \mathrm{C}_r = _{n - 1} \mathrm{C}_{r} + _{n - 1} \mathrm{C}_{r-1}$ を用いた再帰処理

の 2 種類とし、それぞれ関数を作成せよ。

### 考察課題

それぞれの計算方法について、正しく計算できる範囲を調べ、なぜそのような違い
が生じるのか調査・検討せよ。