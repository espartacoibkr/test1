// Blink para Arduino UNO R3
// Hace parpadear el LED integrado (pin 13) cada 250 ms.

const unsigned long INTERVALO_MS = 250;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(INTERVALO_MS);
  digitalWrite(LED_BUILTIN, LOW);
  delay(INTERVALO_MS);
}
