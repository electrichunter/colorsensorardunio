// Sensör bağlantıları
int S0 = 4;
int S1 = 5;
int S2 = 6;
int S3 = 7;
int outPin = 8;

// Frekans değerleri için değişkenler
int redFrequency = 0;
int greenFrequency = 0;
int blueFrequency = 0;

void setup() {
  // Pin modları ayarlanıyor
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(outPin, INPUT);

  // Sensör hassasiyeti ayarlanıyor
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  Serial.begin(9600);
}

void loop() {
  // Kırmızı frekans ölçümü
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  redFrequency = pulseIn(outPin, LOW);

  // Yeşil frekans ölçümü
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  greenFrequency = pulseIn(outPin, LOW);

  // Mavi frekans ölçümü
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  blueFrequency = pulseIn(outPin, LOW);

  // Renk frekansları seri monitöre yazdırılıyor
  Serial.print("Red: ");
  Serial.print(redFrequency);
  Serial.print("\tGreen: ");
  Serial.print(greenFrequency);
  Serial.print("\tBlue: ");
  Serial.print(blueFrequency);
  Serial.println();

  delay(500);
}
