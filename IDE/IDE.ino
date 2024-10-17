void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Acende o led
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  //Apaga o led
  digitalWrite(LED_BUILTIN, LOW);
  delay(1500);
}
