void setup() {
  Serial.begin(9600);
}
int i=0;
void loop() {
  Serial.print("I am alive ");
  Serial.println(i);
  delay(500);   
  i++;
}
