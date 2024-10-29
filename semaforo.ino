// Portas conectadas
int pinLedVermelho = 7;
int pinLedAmarelo = 6;
int pinLedVerde = 5;

// Definição dos intevalos que permanecerão ligados
int intervaloVermelho = 6000; //ms
int intervaloAmarelo = 2000; //ms
int intervaloVerde = 2000; //ms

// função que acende o led vermelho e apaga os demais no intervalo determinado
void acenderVermelho(){
  digitalWrite(pinLedVermelho, HIGH);
  digitalWrite(pinLedAmarelo, LOW);
  digitalWrite(pinLedVerde, LOW);
  delay(intervaloVermelho);
}

// função que acende o led verde e apaga os demais no intervalo determinado
void acenderVerde(){
  digitalWrite(pinLedVermelho, LOW);
  digitalWrite(pinLedAmarelo, LOW);
  digitalWrite(pinLedVerde, HIGH);
  delay(intervaloVerde);
}

// função que acende o led amarelo e apaga os demais no intervalo determinado
void acenderAmarelo(){
  digitalWrite(pinLedVermelho, LOW);
  digitalWrite(pinLedAmarelo, HIGH);
  digitalWrite(pinLedVerde, LOW);
  delay(intervaloAmarelo);
}

void setup() {
  // Defimnição das portas como saída
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
}

void loop() {
  // chama as funções que acendem os leds
  acenderVermelho();
  acenderAmarelo();
  acenderVerde();
  acenderVerde();
  acenderAmarelo();
}
