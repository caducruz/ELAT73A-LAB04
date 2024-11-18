ISR(TIMER2_COMPA_vect) {
  // Código executado na interrupção TIMER 2
}

void setup() {
  TCCR2A = 0;  // Configuração inicial
  TCCR2B = 0;
  TCNT2  = 0;
  OCR2A = 249; // Configuração de tempo
  TCCR2A |= (1 << WGM21);
  TCCR2B |= (1 << CS22); // Prescaler 64
  TIMSK2 |= (1 << OCIE2A);
  sei();  // Ativa interrupções globais
}

void loop() {
  // Código principal
}
