# Güneş Takip Sistemi Arduino Projesi

## Proje Adımları:
### 1) Malzemeler
### 2) Devre Şeması
### 3) Proje Adımları
### 4) Projenin Videosu

---

```
Arduino ile güneş takibi projesi, güneş panellerini güneşin hareketlerine göre doğru açıyla yönlendirmenizi sağlayan bir çözüm sunar.
Projede, güneşin konumunu algılayan bir sensör kullanarak güneş panellerini otomatik olarak hareket ettireceğiz. Böylece güneş
panellerinin ışınım değerini maksimum seviyede tutarak daha fazla enerji üretimini sağlanabilir.
```

### Malzemeler

- Arduino Uno kart
- SG90 servo motor
- LDR sensör x2
- 10K direnç x2
- Jumper kablolar (dişi-dişi)
- Strafor/Rigifoam

---

### Devre Şeması

![devre şeması](https://resimlink.com/J_AYdW0ubn2E)

---

### Projenin Adımları

Devre şemasında görüldüğü gibi servo motorun kablolarını sırasıyla 11, 5V ve GND pinlerine bağlanır.
Servo motor ile UNO arasındaki bağlantıyı kurduktan sonra LDR sensörlerinin birer bacağına 10K dirençlerini lehimlenir.
(Dirençleri lehimleme sırasında, direncin lehimli olduğu bacak artı (+) kutuplu olur.)
Dirençler lehimlendikten sonra, iki adet jumper kablo yardımıyla LDR sensörleri birbirine lehimlenir.
![LDR'ler birbirine lehimlenir](https://resimlink.com/ITAn5MzxC)
Daha sonra LDR'lerin A0 ve A1 pinlerine bağlantısı yapılır.
A0 ve A1 pinlerine bağlanmış jumper kabloların boşta kalan diğer uçları LDR sensörlerinin voltaj bölücü noktalarına lehimlenir.
LDR sensörleri ile UNO arasındaki bağlantıyı kurduktan sonra iki jumper kablo 5V ve GND pinlerine bağlanır.
Bu kabloların boşta kalan diğer uçları birbirlerine bağlamak için lehimlenen jumper kablolara lehimlenir.
(Direncin bağlı olduğu taraf artı (+) kutupludur, yani 5V pinine bağlı kablonun bu bağlantıya lehimlenmesi gerekir.
GND kablosu ise direncin olmadığı bacağa bağlı olan kabloya lehimlenir.)
![Lehimleme](https://resimlink.com/cMdBvAe)
Tüm bağlantı işlemleri tamamlandıktan sonra, strafor/rigifoam ile (başka bir alternatif de kullanılabilir) projenin zemini oluşturulur.
Bu tasarımda önemli olan nokta güneş panelinin yatay/dikey hareket edebileceği bir sistemde olmasıdır.
Düzeneğin tasarımı yapılıp Arduino UNO ve LDR’ler eklendikten sonra kod yazımına geçilir. Kod için Arduino IDE kullanılmaktadır.

---

### Projenin Videosu

[![Video](https://drive.google.com/file/d/1G_Bgg53kLoxwb-GSyB5LfNWxba73pY_3/view?usp=sharing)

