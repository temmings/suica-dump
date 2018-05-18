# これは？

Suicaの履歴をダンプします。

ダンプした値の内訳(の一部)は
[FeliCa LibraryのWiki](https://osdn.jp/projects/felicalib/wiki/suica)
に情報があります。

[libpafe](https://github.com/rfujita/libpafe) を利用しています。

## ビルドする

OSX以外は適当にお願いします。

```bash
brew tap temmings/alt
brew install libpafe
make
```

## 動いた環境

- Mac OS X 10.11.5
- libusb-1.0.20
- libpafe-0.0.8
- Sony [PaSoRi RC-S330](http://www.amazon.co.jp/gp/product/B001MVPD8U/ref=as_li_ss_tl?ie=UTF8&camp=247&creative=7399&creativeASIN=B001MVPD8U&linkCode=as2&tag=selfcoreorg-22)
