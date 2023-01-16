
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor1 = analogRead(A0);
  int sensor2 = analogRead(A2);
  int sensor3 = analogRead(A5);
  
  Serial.print(sensor1);
  Serial.print(","); 
  Serial.print(sensor2);
  Serial.print(","); 
  Serial.print(sensor3);
  Serial.print(",");
  Serial.println(",");
  delay(100);

}
