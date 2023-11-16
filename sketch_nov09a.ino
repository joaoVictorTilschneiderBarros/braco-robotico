#include <Servo.h> //INCLUSÃO DA BIBLIOTECA NECESSÁRIA

const int pinoAltura = 5; //PINO DIGITAL UTILIZADO PELO SERVO
const int pinoDirecao = 6;
const int pinoGarra = 9;
const int pinoAvancar = 10;

Servo garra;
Servo avancar;
Servo altura;
Servo direcao;
int pos;

void setup () {
  garra.attach(pinoGarra);
  avancar.attach(pinoAvancar);
  direcao.attach(pinoDirecao);
  altura.attach(pinoAltura);

  garra.write(0);
  avancar.write(0);
  direcao.write(0);
  altura.write(0);
}

void abrirGarra() {
  for (pos = 0; pos < 79; pos++) { 
    garra.write(pos); 
    delay(15); 
  }
}

void fecharGarra() {
  for (pos = 80; pos >= 0; pos--) { 
    garra.write(pos); 
    delay(15); 
  }
}

void avancar() {
  for (pos = 0; pos < 181; pos++) { 
    avancar.write(pos); 
    delay(15); 
  }
}

void retonar() {
  for (pos = 180; pos >= 0; pos--) { 
    avancar.write(pos); 
    delay(15); 
  }
}

void direcaoEsquerda() {
  for (pos = 0; pos < 181; pos++) { 
    direcao.write(pos); 
    delay(15); 
  }
}

void direcaoDireita() {
  for (pos = 180; pos >= 0; pos--) { 
    direcao.write(pos); 
    delay(15); 
  }
}

void alturaCima() {
  for (pos = 0; pos < 181; pos++) { 
    altura.write(pos); 
    delay(15); 
  }
}

void alturaBaixo() {
  for (pos = 180; pos >= 0; pos--) {
    altura.write(pos); 
    delay(15); 
  }
}

void loop() {
  abrirGarra();
  delay(500);
  direcaoDireita();
  delay(500);
  alturaBaixo();
  delay(500);
  fecharGarra();
  delay(500);
  alturaCima();
  delay(500);
  direcaoEsquerda();
  delay(500);
  alturaBaixo();
  delay(500);s
}
