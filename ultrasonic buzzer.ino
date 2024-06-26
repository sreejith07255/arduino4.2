// C++ code
 int trig=9;
int echo=5;
int buzzer=6;
int distance;
long duration;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(buzzer, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);

duration=pulseIn(echo, HIGH);
distance=duration*0.034/2;

Serial.print("distance= ");
Serial.print(distance);
Serial.println(" cm");
delay(500);
   
  if(distance>100)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  { digitalWrite(buzzer, LOW);
}
}