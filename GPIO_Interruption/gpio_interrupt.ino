// Exemplo de interrupção via GPIO
void setup() {
  pinMode(2, INPUT_PULLUP);  // Configura o pino 2 como entrada
  attachInterrupt(digitalPinToInterrupt(2), handleInterrupt, FALLING);
}

void loop() {
  // Código principal
}

void handleInterrupt() {
  // Código executado durante a interrupção
}
