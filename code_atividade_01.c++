// Código do primeiro arduino para acender um LED quando o sensor PIR detectar movimento
int LED=6, PIR_7=7;
void setup()
{
  
  pinMode(LED, OUTPUT);
  pinMode(PIR_7, INPUT);
}

void loop()
{
 if(digitalRead(PIR_7)==HIGH){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}

int Led1 = 11, Led2 = 5, Botao1 = 3, Contagem = 0;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Botao1, INPUT);
}
