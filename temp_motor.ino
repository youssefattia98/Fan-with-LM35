/*
 Author: Youssef Attia
 Description: fan and alram control accroding to reading from LM35 sensor
*/
float adc, temp;
void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  adc = analogRead(A0);
  temp = (adc * 500) / 1023.0;
  Serial.println(temp);
  if (temp > 25) {
    digitalWrite(13, HIGH);
    digitalWrite(6, HIGH);
  }
  else if (temp < 25) {
    digitalWrite(13, LOW);
    digitalWrite(6, LOW);

  }
  delay(1000);
}
