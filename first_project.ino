void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Arduino Connecté");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  Serial.println("Je suis dans la boucle !");
}
