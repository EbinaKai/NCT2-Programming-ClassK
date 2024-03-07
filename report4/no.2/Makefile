#各種設定
PROG=binomial
CFLAGS= -Wall -g
LFLAGS= -lm
CC=gcc

OBJS=main.o binomial.o

#この行はなくても動くが，これを書くことで
#デフォルトターゲットをはっきりさせておく
#（書かないと，最初に出てきたターゲットがデフォルトになる）
target: $(PROG)

#実行ファイルを作成するルール
#分割コンパイルする時は，ここはリンク作業のみを書くのがよい。
# $@ はターゲット名，今回の場合はOBJSに並んでいる順番になる。
$(PROG):$(OBJS)
	$(CC) $(OBJS) -o $@ $(CFLAGS) $(LFLAGS)

#1つずつ列挙する場合
#それぞれのオブジェクトファイルを作成するルールを書いていく
#main.o:main.c
#	$(CC) $(CFLAGS) -c main.c
#complex.o:complex.c
#	$(CC) $(CFLAGS) -c complex.c

#まとめて記述する場合
# .c.o は，hoge.oはhoge.cに依存しているよという意味
# $< は依存ファイルの先頭，つまり依存しているhoge.cになる
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(PROG)
