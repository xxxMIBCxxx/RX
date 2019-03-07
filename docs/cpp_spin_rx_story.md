
## C++ で紡ぐＲＸマイコン物語

---

### はじまり

昨今、ホビーでも仕事でも、強力なＰＣがある状況では、何でもやりたい事が出来てしまいます。   
今のＰＣは一昔前のスーパーコンピューターより強力な演算能力、メモリー、二次記憶を持っています。   
昔、数億円していたものが現在では数万円で誰でも買えて、使う事が出来るのです。   
また、ネットにアクセスすれば、どんな情報でも殆ど揃っている状況です。   

ＰＣは、生活に密着した環境で、低価格と性能を進化させてきました、携帯電話（スマートフォン）も、ＰＣとは少し異なる地盤を得て発達してきました、そして今も発展を続けています。   
一方、家電、自動車、インフラ、などのように普段はあまり気がつかない部分で裏方で生活を豊かにしている分野があります。   
それが「組み込み系」と呼ばれるマイコンです。   
身の回りの電化製品には当然のようにマイコンが組み込まれて、様々な作業をこなし、生活に介入して豊かにしています。   
昨今、組み込み系マイコンを使って、色々な物を作る事が出来る環境が整い、多くの人がＤＩＹを楽しんでいます。   

「組み込みマイコン」は、非常に小さい規模で使われるマイクロコンピューターで、ＰＣとは異なる作業を分担をしており、比較的単純な物から複雑怪奇な物まで、色々な作業をしています。   
ＰＣのように多くの電力を使わないし、規模が小さい物は低価格なので、気軽に使われています。   
今後は、さらに応用範囲と分野が広がり続けることでしょう。   

ＰＣ上で動くアプリケーションと同様に、組み込みマイコンでもプログラミングを行う作業は必須ですが、ＰＣ上のアプリケーションでは、プログラムを作成すれば、直に動作を確認できます。   
組み込みマイコンの場合、作成したプログラムを組み込みマイコン上にロードして動作させるので、間接的で、その手順や仕組みを理解する必要があります。   

---

### どんな言語を習得すべきなのか？

コンピュータ言語を習得する場合、どの言語を選べば良いのでしょうか？   
※入門者の人にこのような質問を良く聞かれます。   

大雑把に、二つの異なるアプローチを考えてみます。   
 - 気の向くまま、様々な言語を少しづつかじって、広く浅く   
 - 一つの言語だけをとことん追求して、狭く深く   
これら二つのアプローチは、ビルの高さと景色に例える事が出来ると思います。   

「広く浅く」の場合、色々なビルに登る事で、広範囲な知識や経験を獲得する事が出来ます。   
一方「狭く広く」では、一つのビルだけに登る事で、一つの分野に特化した十分な知識を得られます。   
しかし、色々なビルに登って景色を眺めてみると、確かに色々な景色を眺める事は出来ますが、低い場所から眺める景色は所詮制限されたものです、高い場所から眺める景色とは全く異なります。   
一方、高い場所から眺める景色は広大で、遠くまで見渡せます、高い場所から見渡す景色は、ビルが違っても大差無いものです。   

私が薦めたいのは、まず、一つの言語をとことん追求して、ある程度の高さまで登ってしまう事です、一度、ある程度の高さまで達すると、別のビルの同じ高さから眺める景色と大して変わりません。   
※一つの言語をある程度学んでいれば、異なった言語の習得にかかる労力は少ないと感じます。   

高い場所に登るには、時間が必要で、一朝一夕には到達しない事を覚悟する必要があります。   
「人」の能力には個人差があり、短い時間で「結果」を出す人もいますが、大雑把に言って、それは一握りの人たちです。   
ゆっくり歩こうが速く歩こうが、目標があればやがて目的地に到達します。   
「プログラミングを習得するのに何をすれば良いですか？」と質問する人がいますが、このような思考の人は、まず間違いなくプログラミングに向いていません。   
目標、目的があれば、何をすれば良いかなど、自ずと判る筈です。   

---

### マイコンに最大の仕事をさせるプログラミング言語とは？

マイコンをもっとも効率的に動かせる言語はアセンブラかもしれません。   
「かもしれない」と疑問形なのは、アセンブラは確かにマイコンの最下層の言語でこれ以上下位の制御機構はありません、しかしながら、機能を実装したり、改良する場合には適切とは言えない面もあります。   
人間には直接的では無く、簡単と思える指令でも、非常に細かく噛み砕いて命令する必要があり、多くの手順を実装する必要があります。   
これは、巨大で複雑なプログラム（手順）を実装する事を困難にし、改良する場合も効率が良くありません。   
また、アセンブラは「方言」が強く、異なったマイコン間で互換性はほぼありません、これは、「手順」の再利用をほぼ不可能にします。   

「高級言語」は、以上の欠点を補う目的で発展してきました、人間に直感的な架空の命令をコンピュータのプログラムによってアセンブラ命令に翻訳します。   
通常これをコンパイルと呼び、翻訳機をコンパイラと呼びますます。   
昨今、コンパイラの技術的進歩が大きく、非常に効率の高いアセンブラ命令を翻訳するようになってきました。   
場合によっては、人間がアセンブラで直接実装するより効率的な命令を生成する場合もあります。   
この事実は、もはや、アセンブラを使う事なく、最高性能をもったプログラムを高級言語で書ける事を意味します。   

Ｃ言語は（歴史については「ぐぐって」）、アセンブラより人間に直感的な形態でありながら、よりマイコンに近い効率的な言語として発達してきた経緯があります。   
組み込みマイコンの製造者は、マイコンの設計と同じくらいの優先度でＣコンパイラにも投資してきました。   

しかし、Ｃ言語には、仕様上の制約もあります、あきらかに構造的に間違った手順でも、エラーをすり抜けて動作しないアセンブラ命令にコンパイルされてしまいます。   
また、より人間の思考に近いと言っても、マシンに寄った仕様である為、人間のミスを誘発しやすい場合もあります。   
そこで、もっと構造的で、「思考」をより表現しやすく、厳密で、間違いを指摘しやすいプログラム言語としてＣ＋＋が生まれました。   
Ｃ＋＋は、Ｃ言語をベースに開発が進められた為、Ｃ言語と共通の仕様が多くありますが、Ｃ言語とは全く異なったプログラミング言語となっています。   
またコンパイラも、Ｃ＋＋独自の進化を遂げています、根本的にＣコンパイラとは異なる手順を使って翻訳します。   
Ｃ＋＋の言語仕様に沿って書かれたプログラムは、異なったマイコンであっても、Ｃ＋＋コンパイラがあれば、同じようにコンパイルして動かす事が出来ます。   
※これはＣ言語でもそうですが、異なった環境に対する対応をスマートに実現出来ない事が多いです。   

Ｃ＋＋で実装する構造的なプログラムは、Ｃ言語で実装する単純なプログラムより効率的なアセンブラ命令を生成する事さえ出来るようになりました。   

現在、マイコンをもっとも効率的に動かせる（最大の仕事をさせる）コンピューター言語はＣ＋＋と言えます。   

---

### ＲＸマイコンについて

ＲＸマイコンはルネサス社が開発している組み込み系マイコンです、もちろん日本製です。   


---

### ＲＸマイコンにおける最高の開発環境とはどんなものか？

開発環境を語る前に、何故「ＲＸ」マイコンなのかを理解する必要があります。   
ＲＸマイコンは、コストにおいて、競合他社のＡＲＭに比べて、一見すると安いわけではありません。   
しかし、使ってみると、ＡＲＭの同等価格帯の製品などに比べても非常に性能が高い事があらためて確認出来ると思います。   
※ RaspberryPiなどに使われている ARM と比べる人がいますが、「適材適所」というものがあり、消費電力や処理の内容からすると、ＲＸマイコンの方が適切な場合もあります。   
大雑把に言って、100MHz の RX マイコンと同等なのは 200MHz の ARM と言えると思います。   

特に RX600 や RX700 シリーズ（RX24T）では、32 ビットの浮動小数点を使った場合に非常に高い性能を出す事が出来ますので、そのようなアプリケーションには最適と言えます。   



(1)   
(x) boost をコンパイル出来ない C++ コンパイラは不適格なコンパイラと言える。   
(x) 少なくとも２０１９年の時点で、C++11、C++14、C++17 を完全にサポートしていないコンパイラは不適格なコンパイラと言える。   
※「不適格なコンパイラ」とは「C++ コンパイラではない」と断言できる。   


現在考えうる最高の開発環境は：   
gcc g++、make、Visual Studio Code となっています。   


---

### オープンソースのコンパイラを利用する意味

マイコンの製造会社は、マイコンのプログラム開発をより効率的に進められるようにＩＤＥ（統合開発環境）を作っている事が当たり前となっています。   
ＩＤＥとは、プログラムの作成、コンパイル、デバッグ、実行プログラムの実マイコンへの転送などを統合して行えるアプリケーションです。   
コンパイラも独自に開発している場合があります。   
ただし、このアプリケーションは「有償」の場合が多く（開発には莫大なコストがかかっている）、無料版を用意していた場合でも、有償版より劣る制限を設けている事が普通です。   
※とあるメーカーでは有償版のＩＤＥ（コンパイラ）は２０万円くらいします、数万個単位で売るような製品でもない限り、このようなコストを償却する事は出来ません、また、大手のメーカー（マイコンを沢山使うメーカー）には無償で貸し出す場合がありますが、個人や、数百セットくらいのスケールでは無償で貸し出すような事はしていません。   

C++ は、独自に発展して来ましたが、言語仕様は熱心な C++ ユーザーや団体が策定しています。   
オープンソースで有名な GPL は、かなり古くから C コンパイラをオープンソース化しています。   
また、C++ コンパイラも率先してリリースしています。   
gcc はサポートしている CPU の数において群を抜いており、gcc の開発に関わっている人々も莫大な数となっています、みんな無償で貢献しています。   
また、C++ 標準化委員会の勧告を適切に最速で実装しており、エラー検出、最適化にも最大の配慮がなされています。   
その意味では、メーカーが開発しているコンパイラより優れています。   
とあるマイコンメーカーは独自のコンパイラ開発を諦めて、gcc の開発に貢献（資金提供）しています。   

私も、より良い物を作るにはその考え方に賛成ですが、大手メーカーでは、過去の資産を捨てる判断が難しく、ライセンス、自前の開発部隊の維持など色々な問題で、未だに独自コンパイラの開発を諦めていません。   

昨今、LLVM と呼ばれる、gcc とは異なった実装のオープンソースコンパイラも出てきており、選択枠も増えて来ました。   
ただ、ＲＸマイコン用オープンソースの LLVM ベースのコンパイラはまだ無い為、gcc、g++ コンパイラを使っていきます。   

ルネサス社は無料サポートとして、GNU Tools（RX Toolchain）を利用可能にしています、これらは、IDE から呼ばれる事を前提に改良された物で、gcc のオリジナルとは少しだけ異なっています。   
デバッグ環境なども揃っていますが、自分はいくつかの点で不満なので自分でツールをビルドしています。   
- アクティベーションが必要な事（無料だけど）   
- Applle 環境はサポートされない事   
- gcc の最新バージョンを積極的にリリースしない事（リリースに大きな遅延がある）
- IDE をベースにしている事
- 純粋な gcc では無い事（裏で、独自のパスを設けて、目に見えない部分がある事）   
  ※スタートアップや、ブートストラップに起因する処理、デバイス固有定義の生成、デバッグコードの埋め込みなど色々

gcc を自分でビルドしてみると、開発にはほとんど不利益が無い事が確認出来ました、逆に利点が多い事があります。   
- 最新の gcc を使う事が出来る。（C++17、C++20）
- RX 以外のプラットホームにも移行が簡潔。
- スタートアップからの動作が明確。
- C++ フレームワークの利便性で、デバイス固有の定義が必要ない。



---

### デバッグ環境について
ソースコードデバッガーとＩＣＥ（インサーキットエミュレーター）の組み合わせは、非常に強力で柔軟な開発環境を提供してきました。   
一旦この環境が浸透してしまうと、精神的にも、肉体的（物理的）にもこの環境から抜け出せない開発者が多く発生してしまい、応用したり工夫する力、想像や推定など、基本的な能力が衰退してしまいました。   

ＩＣＥは、非常に高速なクロックでドライブされるマイクロプロセッサには物理的に適合しなくなってきてしまいましたが、ＬＳＩの物理的な検査を行う為に発達してきたＪ－ＴＡＧ技術を拡張する事で、ＩＣＥの代わりになる事が浸透して、現在では、マイクロコントローラーのデバッグ環境の定番技術となっています。   

ほとんどの技術者は、Ｊ－ＴＡＧ等による開発環境が無い現場を敬遠して、これが無いと「まともな開発」は出来ないものと認識している人が多数いる現実があります。   

一方、何かの組み込み開発で、ソフトウェアーやハードウェアーの不具合から、想定した動作をしない状態に陥ると、「まともな開発環境」が無い状態では抜け出せない開発者が多数います、また、このような状況を目の当たりにしている為、「まともな開発環境が無い」世界に恐れを抱いているのです。   
この「恐れ」は、経験不足や、想像力の欠落などからくるものですが、それさえ認識していない人が多くいる事に大変危機感を持っています。   

「まともなデバッグ環境が無い」事は、マイナス要因ではありますが、決定的な要因ではありません、「ステップ実行」が無い為に原因を特定出来ないのなら


---

### C++ に対する誤解と偏見

C 言語を常用する開発者に多いのですが、C++ に対する「誤解」が非常に多い事に驚きます。   
※自分も C++ を始めた頃、「ネガティブ」な感情を持っていました。   

いくつかの例として・・   
- メモリーを多く消費する（そんな事は全くありません）
- C で作った方が高速に動作する（全くの間違いです）
- アセンブラに近い C 言語の方が最適化に有利（殆どの場合、C++ で「適切」に実装した方が最適化が巧妙に適用され、高速に動作します）



---

### 開発環境を整える

開発のスタイルは、色々な状況により変化するものと思いますが、現在、行っていて便利と思われる開発スタイルを紹介します。   
1.  基本、コンソールベースでの開発を行うものとする。
2.  gcc g++, make, git などのコマンドを利用する。
3.  Visual Studio Code を使ってソースコードを作成する。

以上の点について順番に説明していきます。   

1. コンソール（シェル）からコマンドを入力するのに抵抗があるかもしれませんが「慣れ」です、コマンドはショートカットと同じで、インストールされているコマンドを全て実行する事が出来ます。   
ファイルの操作も行え、多くの中から特定のファイルを探したり、多くのファイル中の条件にあったファイルを操作するのも簡潔に行えます。   
Linux や、MacOS では、コンソールは標準なので、Windows の場合を説明します。   
Windows10 になって、シェルが使えるようになったのですが、

2. コンパイラは「gcc g++」を使うのですが、プロジェクトをコントロールするのは「Makefile」で、「make」コマンドです。   
Makefile の記述は難解で複雑ですが、既に用意されたベースとなる物をコピーして、自分のプロジェクトで固有な部分を修正すれば大丈夫です、ある程度機能や構造が判ってくれば、機能を追加する事も可能です。   
Makefile を自動で生成する為に cmake コマンドのような物もありますが、生成の為の設定ファイルを作り、生成、と手順を踏む必要があり、これは、コードジェネレーターと同じ問題を持っています。   
Makefile の構造は複雑ですが、ベースとなる下敷きが良く精査されて作られていれば、自分用のカスタマイズも少なく、シンプルで強力です。   

3. Visual Studio Code はオープンソースで開発されており、マルチプラットホームで、コードを書くテキストエディターの中では、極めて優秀で柔軟と思います。   
※気に入らない人は、自分が好きなテキストエディターを使えばよく、無理に使う必要はありません、ただ、インテリセンスなどの機能は便利で間違いも少なくなるので、試してみる事を薦めます。   
使いやすくするには多少の設定が必要です、また、内部的な動作のポリシーを理解する必要があります。   


---

### RX マイコン用 gcc をビルドする


---

### Makefile を利用する




---

### 統合開発環境に備わっているコードジェネレーションの功罪

これは、フレームワークやライブラリーの実装が不完全なので、それを補間する為のもののようですが、そんな事をしなくても、フレームワークやライブラリーの完成度を上げれば解決します。   
この機能が駄目な理由はいくつかありますが、一方向なので、コード生成で出てきたコードを修正した場合、異なった設定でやり直したりすると、修正したコードは反映されません。   

そもそも、細かい設定を色々しないと動作しないフレームワークやライブラリを何とかするべきだと思います。   

たとえば、シリアルコミュニケーション（SCI）を利用するのに必要な事は何でしょうか？   
1. どの SCI ポートを使うか
2. ボーレート、通信フォーマット
3. 割り込みを使うか、使わないか、使う場合の割り込みレベル
4. バッファリングの方法

たったのこれだけです。   

Arduino は、マイコンを使って何かを作る場合に、最低限の知識があればやりたい事が出来るように、なるべくシンプルな方法で実装したフレームワークと言えます。   
非常に良く考えられて設計されており、プロトタイピングを少ない手間で実現できます。   



---

### RX65N Envision Kit

RX65N は、速度、機能など、バランスが良いマイコンです。   
特に、液晶表示に特化したハードウェアーや描画エンジンを持っており、GUI を使ったアプリケーションを実装するのに適しています。   




---

### gcc で生成する実行形式のイロハ


---

### LED 点滅

---

### 標準出力 printf の基本的な仕組み

printf 関数を呼んだ場合、どのような機構で文字が出力されるのかを簡単に解説します。   

printf 関数は文字出力を行うのにファイル出力を利用しています。   
通常アプリケーションが起動した段階で、「stdout、stdin、stderr」と３つのファイルディスクリプタが定義された状態になっています。   
- stdin:  ０
- stdout: １
- stderr: ２

それぞれ、０、１，２番のファイルＩＤが割り当ててあります。   
つまり、printf を呼ぶと、上記のファイルディスクリプタを使って、出力する文字の数だけ「write」関数が呼ばれます。   
gcc のアプリケーションでは、POSIX の標準関数は、特別な定義になっていて、もしアプリケーション内に、write 関数の実装が存在すれば（リンク時に見つかれば）、その関数が優先される仕組みがあります。   
※具体的には、ヘッダーで、以下のように定義されています。   
```
int write(int fd, const void *ptr, int len) __attribute__((weak));
※「__attribute__((weak))」がある事で、アプリケーション定義のAPIが優先されます。
```

従って、write 関数内で「fd == 1」の場合に、シリアル出力するようにしておけば、printf 関数を呼べばそのままシリアル出力に流れていきます。   

この仕組みは「common/syscalls.c」に実装があります。   

また、シリアル出力として「sci_putch(char ch)」関数をユーザーのアプリ内で C言語の API として定義しておきます。   
※「sci_.putch(ch)」は、ユーザーが定義したシリアル入出力のクラスになっています。   

```
extern "C" {

    // syscalls.c から呼ばれる、標準出力（stdout, stderr）
    void sci_putch(char ch)
    {
        sci_.putch(ch);
    }

}
```

---

### printf を使うな！

C 言語のプログラマや、組み込みプログラマの多くは、printf を何の疑いもなく利用していますが、この API は大きな欠陥があり、互換性の為だけに用意されています。   
一番の問題は、可変引数です。   
これは、引数の受け渡しをスタックベースで行い、printf 内のフォーマット文字列と、引数の不整合は、プログラムを簡単にクラッシュさせてしまいます。   
この「不整合」はある程度はコンパイラが検出しますが完全では無く、完全なエラーの検出も出来ません。   

通常「現場」では、printf のような可変引数の利用は厳禁としており、使う事を禁止しています。   
※その為、C++ では iostream に代表される仕組みが採用されています。   
Arduino でもシリアル出力などで、printf が使われないようになっています。

しかしながら、printf に備わっている機能は「手っ取り早く魅力的」でもあります、そこでこのフレームワークでは、これに似た仕様を安全な方法で提供しています。   
それが、format.hpp クラスです。   

---

### Makefile の勘所



---

### C++ トピック（一時変数）

未だに、変数をまとめて関数の頭で宣言したり、一つの変数を使いまわしたりしている人がいますが、現代のコンパイラでは、このような書き方は弊害しかありません。   

ＮＧ：
    int i, j, k;
	k = 0;
	for(i = 0; i < 10; i++) {
	    j = getch();
		if(j == EOF) break;
		k++;
	}
    for(i = 0; i < k; i++) {
	
	}
ＧＯＯＤ：
    int k = 0;
	for(int i = 0; i < 10; i++) {
	    int j = getch();  // 又は「  auto j = getch();  」
		if(j == EOF) break;
		k++;
	}
    for(int i = 0; i < k; i++) {
	
	}
※変数は、使いたい時にその手前で宣言するか、内包すれば良いのです。
※使いまわす事に何の意味（余分なメモリの節約？）もありません。

