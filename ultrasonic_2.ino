int trig=9;
int echo=5;
int distance;
long duration;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
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
delay(1000);

}
