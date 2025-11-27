# HAYATTA-KALMA-SIMULATORU
Bu proje, C programlama dili kullanılarak hazırlanmış basit bir **hayatta kalma simülasyonu** oyunudur. Oyuncu farklı komutlar kullanarak avlanabilir, dinlenebilir, sığınak arayabilir ve tehlike dalgalarından kaçmaya çalışır. Amaç sağlık ve enerjiyi koruyarak mümkün olduğunca uzun süre hayatta kalmaktır.

---

## 📌 Özellikler

* Sağlık, enerji, yemek ve sığınak durumunu takip eden değişkenler
* Rastgele olaylar (avlanma başarısı, yaralanma vb.)
* Birden fazla komut ile etkileşim
* do-while ve for döngülerinin zorunlu kullanımı
* Şifreli kapı sistemi
* Tehlike dalgaları

---

## 🔧 Kullanılan Kütüphaneler

### `<stdio.h>`

* Ekrana çıktı vermek ve kullanıcıdan veri almak için kullanılır.
* `printf()` ve `scanf()` fonksiyonlarını içerir.

### `<stdlib.h>`

* Rastgele sayı üretmek için `rand()` kullanılmaktadır.
* `srand()` ile zaman tabanlı başlatma yapılır.

### `<time.h>`

* `time(NULL)` ile rastgele sayıların her çalıştırmada farklı olmasını sağlar.

---

## ▶️ Nasıl Çalışır?

Program çalıştığında başlangıçta sağlık ve enerji 100, yemek sayısı 3 olarak ayarlanır. Oyuncuya çeşitli komutlar sunulur ve program bir **do-while** döngüsü içinde çalışmaya devam eder.

Kullanıcı bir komut girdiğinde `switch-case` yapısı çalışır ve ilgili işlemler gerçekleşir.

---

## 🕹️ Komutlar

### **A – Avlan**

* Enerji 10 azalır.
* %50 ihtimalle yemek bulunur.
* %20 ihtimalle yaralanma yaşanır.

### **S – Sığınak Ara**

* Enerji >20 ve sağlık >30 ise sığınak bulunur.

### **E – Envanter**

* Sağlık, enerji, yemek ve sığınak bilgisi gösterilir.

### **R – Dinlen**

* Enerji +15, sağlık +10 artar.
* Değerler maksimum 100 olabilir.

### **F – Tehlike Dalgası**

* Bir **for döngüsü** ile 3 dalga oluşturulur.
* Her dalgada sağlık ve enerji 5 azalır.

### **P – Şifreli Kapı**

* Bir **do-while** döngüsü ile oyuncu K harfini girene kadar kapı açılmaz.

### **X – Çıkış**

* Oyunu sonlandırır.

### **default – Geçersiz Komut**

* Tanınmayan bir komut girildiğinde uyarı verir.

---

## ⚠️ Ölüm Sistemi

Sağlık 0 veya altına düşerse oyuncu ölür ve oyun otomatik olarak biter.

---

## 📘 Özet

Bu proje, C dilinin temel yapı taşlarını uygulamalı şekilde göstermektedir:

* Koşul ifadeleri
* Döngüler (for, do-while)
* switch-case
* Rastgele sayı üretimi
* Kullanıcı ile etkileşim

Kod, hem eğitim amaçlı hem de temel oyun mantığını göstermek için uygundur.

---

## 📄 Lisans

Bu proje eğitim amaçlıdır ve serbestçe düzenlenebilir, geliştirilebilir.
