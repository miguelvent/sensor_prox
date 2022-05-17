// C++ code
 
int trig = 2;
int echo = 3;
int led = 8;
int buzzer = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  int duracao = pulseIn(echo, HIGH);
  int distancia = (duracao/2) / 29.1;
  Serial.println(distancia);
  if (distancia >90 and distancia <=100){
  	 digitalWrite(led, HIGH);
    tone(7, 2000);
      delay(200);
    tone(7, 3000); 
   delay(500);
  }
  else{
   digitalWrite(led, LOW);
    noTone(7);
   delay(500);
  }
}