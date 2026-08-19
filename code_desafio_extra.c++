// Código do segundo arduino para acender dois LEDs de forma alternada quando o botão for pressionado, e apagar os dois LEDs quando o botão for pressionado pela terceira vez
int Led1 = 11, Led2 = 5, Botao1 = 3, Contagem = 0;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Botao1, INPUT);
}

void loop() {
  if (digitalRead(Botao1) == HIGH) {
    delay(100);

    while (digitalRead(Botao1) == HIGH) {
      delay(10);
    }

    Contagem++;

    if (Contagem > 3) {
      Contagem = 1;
    }

    if (Contagem == 1) {
      digitalWrite(Led1, HIGH);
      digitalWrite(Led2, LOW);
    } else if (Contagem == 2) {
      digitalWrite(Led1, LOW);
      digitalWrite(Led2, HIGH);
    } else if (Contagem == 3) {
      digitalWrite(Led1, LOW);
      digitalWrite(Led2, LOW);
    }
  }
}
