
# Arduino ile GY-31 Renk Tanıma Sensörü Kablolama ardunio nano
## Belgelendirme

[Çıktı Görseli](https://github.com/electrichunter/colorsensorardunio/blob/main/colorsensorserial.png)

  
## Kablolama ve kurulum

Arduino Nano ve GY-31 renk tanıma sensörüyle bir bağlantı yaparak farklı renkleri tanımak için aşağıdaki adımları takip edebilirsiniz:
Malzemeler

    Arduino Nano
    GY-31 renk tanıma sensörü
    Jumper kabloları
    Breadboard (isteğe bağlı)

Kablolama

    VCC Bağlantısı: GY-31 sensöründeki VCC pinini Arduino Nano'nun 5V pinine bağlayın.

    GND Bağlantısı: GY-31 sensöründeki GND pinini Arduino Nano'nun GND pinine bağlayın.

    S0 ve S1 Bağlantıları:
        GY-31'in S0 pinini Arduino Nano'daki dijital pin 4e bağlayın.
        GY-31'in S1 pinini Arduino Nano'daki dijital pin 5e bağlayın.

    S2 ve S3 Bağlantıları:
        GY-31'in S2 pinini Arduino Nano'daki dijital pin 6ya bağlayın.
        GY-31'in S3 pinini Arduino Nano'daki dijital pin 7ye bağlayın.

    Out Bağlantısı: GY-31'in OUT pinini Arduino Nano'daki dijital pin 8e bağlayın.

  
