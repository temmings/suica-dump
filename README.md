# これは？

Suicaの履歴をダンプします。

ダンプした値の内訳(の一部)は
[FeliCa LibraryのWiki](https://osdn.jp/projects/felicalib/wiki/suica)
に情報があります。

[libpafe](http://homepage3.nifty.com/slokar/pasori/libpafe.html) を利用しています。

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
- Sony PaSoRi RC-S330
