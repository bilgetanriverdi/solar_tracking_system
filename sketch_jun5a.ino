#include <Servo.h>

Servo servoMotor;
int ldrPin1 = A1; // Birinci LDR sensörünün pin numarası
int ldrPin2 = A0; // İkinci LDR sensörünün pin numarası

void setup() {
  servoMotor.attach(11); // Servo motorun bağlı olduğu pin numarası
}

void loop() {
  int ldrValue1 = analogRead(ldrPin1); // Birinci LDR sensöründen okunan değer
  int ldrValue2 = analogRead(ldrPin2); // İkinci LDR sensöründen okunan değer

  // Işık yoğunluğuna göre servo motorun açısını hesapla
  int servoAngle = map(ldrValue1 - ldrValue2, -1023, 1023, 0, 180);
  
  servoMotor.write(servoAngle); // Servo motorun açısını ayarla
  
  delay(100); // İşlemi 100ms'lik bir gecikmeyle tekrarla
}