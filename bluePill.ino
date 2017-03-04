


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PB11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Hello again");
  digitalWrite(PB11, HIGH);
  delay(500);
  digitalWrite(PB11, LOW);
  delay(500);
}
