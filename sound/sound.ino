int ledPin =13;
int sdi=1;
int san=A0;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(sdi,INPUT);
Serial.begin(9600);
}

void loop() {
int valdi=digitalRead(sdi);
int valan=analogRead(san);
Serial.print(valan);
Serial.print("\t");
Serial.println(valdi);
if (valdi==HIGH){
  digitalWrite(ledPin,HIGH);
}
else {
  digitalWrite(ledPin, LOW);
}
}
