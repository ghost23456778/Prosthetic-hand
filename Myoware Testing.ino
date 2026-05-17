int emgPin= A1;
int emgValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  emgValue= analogRead(emgPin);
  Serial.println(emgValue);
  delay(100);
}
